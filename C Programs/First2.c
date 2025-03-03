#include<stdio.h>

extern int Addition();

int main()
{
    int ret=0;
	
	ret=Addition();
	
	printf("The addition is:%d\n",ret);   //Format specifiers are very important

    return 0;
}

