#include <stdio.h>
int main()
{
    char in;
    int min,sec;
    float sec2,pay,pay2,pay3;
    scanf("%c",&in);
    if(in=='A' || in=='B')
    {
        scanf("%d.%d",&min,&sec);

        if(sec>=60)
        {
            min++;
            sec=sec-60;
        }
        sec2=sec;
        if(in=='A')
        {
            min=min-200;
            pay2=min*3;
            pay3=(sec2/60)*3;
            pay=199+pay2+pay3;
        }
        if(in=='B')
        {
            min=min-400;
            pay2=min*2;
            pay3=(sec2/60)*2;
            pay=299+pay2+pay3;
        }
    }
    printf("%.2f",pay);
}
