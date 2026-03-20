#include<stdio.h>
int main(void){
    long double a = 1.0f * 0xff.ap3f;
    float toobig = 1e1000 * 100;
    float toolow = 1e-1 / 1e-100;
    float b = 2e20 + 1,c;
    c = b - 2e20;
    printf("%f",c);
    printf("\n%f,%f",toobig,toolow);
    printf("\n%Lf",a);
    printf("\n%.2f,%.5e,%a",a,a,a);
}