#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void)
{
    time_t now = time(NULL);
    struct tm*local = localtime(&now);
    int now_hour = local->tm_hour;
    int now_min = local->tm_min;

    int hour;
    int min;

    printf("还有多久下课?告诉我几点下课,请先输入 24进制时 回车后输入 分\n");
    scanf("%d",&hour);
    
    if (hour > 24)
    {
        printf("不是哥们，你在地球吗？一天怎么这么久...玩我呢？给你关喽");
        return 0;
    }
    else if (hour <= now_hour)
    {
        printf("何意味？电脑时间不对还是你是故意玩我呢？都下课了问我干嘛");
        return 0;
    }
    




    scanf("%d",&min);

    if (min > 60)
    {
        printf("不是哥们，你在地球吗？一小时怎么这么久...玩我呢？给你关喽");
        return 0;
    }

    
    int minless = hour*60 + min - (now_hour*60 + now_min);

    if (minless >+ 95)
    {
        printf("我先当你没输错...你最好没玩我...这么算的话");
    }
    else if(minless <= 0)
    {
        printf("何意味？这不是下课了？");
    }
    printf("还有%d分钟下课",minless);

    return 0;
}