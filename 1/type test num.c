#include<stdio.h>
int main(){
    short  a = 65538;
    long  b = 3l;
    unsigned  c = -4294967293u;    
    long long unsigned  d = -18446744073709551613llu;
    float e = -2.333e2;
    printf("a=%hx\nb=%ld\nc=%u\nd=%llu\ne=%.1f\n%d",a,b,c,d,e,sizeof(unsigned long long));
    return 0;

}