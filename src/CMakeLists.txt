add_executable(${PROJECT_NAME} main.cpp pwm_controller.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/include)

target_link_libraries(${PROJECT_NAME}
	pico_stdlib
	hardware_pwm
)

pico_add_extra_outputs(${PROJECT_NAME})

