#include<stdio.h>

int main(){
    printf("%f\n",0.1f);
    printf("%f\n",0.1F);
    printf("%f\n",0.1);
    printf("%Lf\n",0.1l);
    printf("%Lf\n",0.1L);

    printf("%f\n",1.0e-5f);
    printf("%f\n",1.0e-5F);
    printf("%f\n",1.0e-5);
    printf("%f\n",1.0e-5l);
    printf("%f\n",1.0e-5L);
        
    return 0;
}