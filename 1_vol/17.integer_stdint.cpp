#include<stdio.h>
#include<stdint.h>

int main(){
    
    int8_t num1 = -128;
    int16_t num2 = 32767;
    int32_t num3 = 3147483647;
    int64_t num4 = 9223372036854775807;
    
    printf("%d %d %d %lld\n", num1, num2, num3, num4);

    uint8_t num5 = 255;
    uint16_t num6 = 65535;
    uint32_t num7 = 4294967295;
    uint64_t num8 = 18446744073709551615;

    printf("%d %d %d %lld\n", num5, num6, num7, num8);

    return 0;
}