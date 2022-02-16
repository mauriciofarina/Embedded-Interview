#include <stdint.h>
#include <stdio.h>

#define GPIO_PIN (1 << 10)

uint32_t *gpio_reg = 0xA12BD442;

int main(void) {

    while (1) {
        if (*gpio_reg & GPIO_PIN) {
            printf("Button Pressed\n");
        }
    }

    return 0;
}