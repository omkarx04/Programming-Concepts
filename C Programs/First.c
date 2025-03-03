#include<stdio.h>

extern int no;  // Declaration of variable
extern int i;
extern int j; 
extern int x;
extern int y=151;
void gun();

int main()
{
	printf("Inside main");
    printf("%d\n",no);
	fun();
	gun();

    return 0;
}

int i=21;

void gun()
{
	
	printf("Inside gun");
}

    
// gcc  First.c  Second.c   -o   Myexe
// ./Myexe      For Linux or MACOS
// Myexe        For windows