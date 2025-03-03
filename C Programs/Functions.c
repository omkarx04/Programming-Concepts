
#include<stdio.h>

int Addition(int , int );
int Substraction(int , int );
int Multiplication(int , int );
int Division(int , int );

int main()
{
    int A = 0;
    int B = 0;
	int C = 0;
    int Ret = 0;
	int Ret1 = 0;
	int Ret2 = 0;
	int Ret3 = 0;
	printf("Enter the first no:\n");
	scanf("%d",&A);
	printf("Enter the second no:\n");
	scanf("%d",&B);
	printf("Addition=1\nSubstraction=2\nMultiplication=3\nDivision=4\n");
	scanf("%d",&C);
    if(C==1)
	{
    Ret = Addition(A,B);
     printf("%d",Ret);
	}
	
	else if(C==2)
	{
    Ret1 = Substraction(A,B);
     printf("%d",Ret1);
	}
	
	else if(C==3)
	{
    Ret2 = Multiplication(A,B);
     printf("%d",Ret2);
	}
	
	else if(C==4)
	{
    Ret3 = Division(A,B);
     printf("%d",Ret3);
	}
    return 0;
}

int Addition(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;

    return Ans;
}

int Substraction(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 - No2;

    return Ans;
}

int Multiplication(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 * No2;

    return Ans;
}

int Division(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 / No2;

    return Ans;
}