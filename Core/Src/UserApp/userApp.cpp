#include <stdio.h>
#include "usart.h"
#include <string>
#include "UserApp/userApp.h"
#include "stm32f4xx_hal.h"
#include "retarget.h"
#include "Driver/qmc5883l.hpp"

qmc5883l qmc5883l_impl_;

void setup() {
    printf("run setup\r\n");
    qmc5883l_impl_.qmc5883l_init(I2C1,400000,0x1a);
}

void loop() {
    qmc5883l_impl_.qmc5883l_printf_loop();
    // HAL_GPIO_TogglePin(led0_GPIO_Port, led0_Pin);
    // std::string str = "hello c++ loop";
    // printf("%s\r\n", str.c_str());
    // HAL_Delay(1000);
}