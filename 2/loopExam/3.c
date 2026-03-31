#include<stdio.h>

int main(void){
char in,a = 'a',b = 'a';

for (int o = scanf("%c",&in);o;o = scanf(" %c",&in))
{
int i = 0,j = 0;
b = 'a';
for (size_t count = (int)in -(int)a ; i < count; i++)
    {
        printf("%c",b);
        b++;
        if(j>i)
        {
            printf("\n");
        }
        j++;
    }
    


}


    return 0;
}