#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char message_0[] = "The Message 0";
static char message_1[] = "The Message 1";

void foo(char *message, uint32_t code) {

    char buffer[32] = {0};
    uint32_t *value;

    memcpy(buffer, message, sizeof(message));
    printf("buffer: %s\n", buffer);

    message = message_1;
    printf("message: %s\n", message);

    *value = code;
    printf("value: %u\n", *value);

    uint8_t number = 100000 / *value;

    if (number > 1000) {
        printf("number (true): %u\n", number);
    } else {
        printf("number (false): %u\n", number);
    }
}

int main(void) {
    char *message = message_0;

    foo(message, 10000);

    return 0;
}