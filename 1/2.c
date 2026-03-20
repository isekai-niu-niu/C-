#include <stdio.h>

int main(){
    static int count = 0;
    
    printf("%d\n",count);
    if (count<10){

    
    count++;
    printf("cycle?\n");

    main();
    }
}