#include<stdio.h>

int main(){
    
    float num1 = 0.1f;
    double num2 = 3867.215820;
    long double num3 = 9.327513l;

    printf("%L %L %Lf\n", num1, num2, num3);

    return 0;
}