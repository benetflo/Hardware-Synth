#include "pwm_controller.hpp"

const float wrap = 4095.0f;

PwmController::PwmController(uint pin, float frequency, float duty_cycle)
	: pin(pin), frequency(frequency), duty_cycle(duty_cycle) {

	gpio_set_function(pin, GPIO_FUNC_PWM);
	pwm_config config = pwm_get_default_config();
	pwm_config_set_clkdiv(&config, 125.0f);
	pwm_config_set_wrap(&config, wrap);
	pwm_init(pwm_gpio_to_slice_num(pin), &config, true);
}

void PwmController::setFrequency(float freq){
	this->frequency = freq;

	uint slice = pwm_gpio_to_slice_num(pin);
        float clock_freq = 125000000.0f;
        float divider = clock_freq / (frequency * wrap);

        pwm_set_clkdiv(slice, divider);
}

void PwmController::setDutyCycle(float duty_cycle){
	this->duty_cycle = duty_cycle;
	pwm_set_gpio_level(pin, (uint32_t)(duty_cycle * wrap));
}

void PwmController::start(){
	pwm_set_enabled(pwm_gpio_to_slice_num(pin), true);
	pwm_set_chan_level(pwm_gpio_to_slice_num(pin), pwm_gpio_to_channel(pin), wrap * (this-> duty_cycle));
}

void PwmController::stop(){
	pwm_set_enabled(pwm_gpio_to_slice_num(pin), false);
	pwm_set_chan_level(pwm_gpio_to_slice_num(pin), pwm_gpio_to_channel(pin), 0);
}
