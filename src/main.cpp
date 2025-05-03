#include "pwm_controller.hpp"

#include "pico/stdlib.h"

int main(){

	PwmController test(6, 440, 0.5f);

	while(1){
		test.start();
		sleep_ms(200);
		test.stop();
		sleep_ms(200);
	}

	return 0;
}
