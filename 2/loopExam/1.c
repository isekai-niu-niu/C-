#include<stdio.h>

int main(void){
    int o = 0,a = 0;

    
    for(a = scanf("%d",&o);a != 0;a = scanf("%d",&o)){
        for(int i = 1;i - 1 < o;i++)
        {
            for (int j = 1; j - 1 < i; j++)
            {
                printf("%d",j);
            }

            for (int k = i - 1; k > 0; k--)
            {
                printf("%d",k);
            }
            
            printf("\n");
        }
        

    }

    printf("over\n");

    return 0;
}