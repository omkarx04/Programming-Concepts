#include<stdio.h>

int main()
{
    int no1 = 10;
    int no2 = 10;
    int ans1 = 0;
    int ans2 = 0;





    ans1 = no1++;       // postincrement
    printf("Value of ans1 %d\n",ans1);     //10
    printf("Value of no1 %d\n",no1);       //11

    ans2 = ++no2;       // preincrement
    printf("Value of ans2 %d\n",ans2);     //11
    printf("Value of no2 %d\n",no2);       //11

    return 0;
}