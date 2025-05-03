#ifndef PWM_CONTROLLER_H
#define PWM_CONTROLLER_H

#include "pico/stdlib.h"
#include "hardware/pwm.h"

class PwmController {

	private:
		uint pin;
		float frequency;
		float duty_cycle;
		pwm_config config;
	public:
		PwmController(uint pin, float frequency, float duty_cycle);
    		void setFrequency(float frequency);
    		void setDutyCycle(float duty_cycle);
	        void start();
    		void stop();
};

#endif
