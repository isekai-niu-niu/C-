#include<stdio.h>

int main(void){
  char in,a = 'a',b = 'a';
    size_t i;
    for (int o = scanf("%c",&in);o;o = scanf(" %c",&in))
    {
        o = 0;
        //printf("o=%d",o);
        for (size_t count = (int)in - (int)a + 1 , i = 1;i - 1 < count;i++){
            //printf("\ncount=%d,a=%d,in=%d",count,a,in);
            for (size_t j = 0; j < i; j++)
            {
                //printf("\nj=%d,i=%d",j,i);
                printf("%c",b);
                b++;
            }
            printf("\n");
        }
    b = 'a';
    }
        return 0;
}
