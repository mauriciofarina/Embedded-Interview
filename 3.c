#include <stdint.h>
#include <stdio.h>

typedef struct
{
    uint32_t a;
    uint8_t b;
    uint32_t c;
    uint8_t d;
    uint16_t e;
    uint8_t f;
    uint32_t g;
    uint16_t h;
    uint8_t i;
} the_struct_t;

int main(void) {
    printf("%ld\n", sizeof(the_struct_t));

    return 0;
}