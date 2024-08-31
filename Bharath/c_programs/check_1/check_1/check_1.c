#include <stdio.h>

typedef unsigned int uint8_t;
typedef signed char int8_t;

int main() {
    uint8_t unsignedVar = 255;  // 8-bit unsigned integer (0 to 255)
    int8_t signedVar = -128;     // 8-bit signed integer (-128 to 127)

    printf("Unsigned Variable: %u\n", unsignedVar);
    printf("Signed Variable: %d\n", signedVar);

    return 0;
}
