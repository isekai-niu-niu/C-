#include<stdio.h>
int main(){
    char a = 'a';
    char b = 'a',c = 97;
    char d = '1',e = 'b'; 
    printf("%d,%c,%c,%c,%d,%d,%c\n",a,b,c,d,d,e,e);
    char o = '\012',x = '77';
    printf("%o,%c",o,x);
    char z;
    scanf("%c",&z);
    printf("%c这个字符的code是%d",z,z);


    return 0;


}