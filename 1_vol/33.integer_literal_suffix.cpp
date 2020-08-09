#include<stdio.h>

int main(){
    printf("%ld\n", -10L);
    printf("%lld\n", -1234567890123456798LL);
    printf("%u\n", 10U);
    printf("%lu\n", 123465790UL);
    printf("%u\n", 10UL);
    printf("%lu\n", 123465790ULL);

    return 0;
}