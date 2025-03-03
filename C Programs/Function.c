#include<stdio.h>
       //Gharakhalche dukan
int Addition(int No1,int No2)     //Function Defination   No1 & No2->Function Arguments
{                                 //Block chi suruvat
	int Ans=0;                    //Local variable of Addition
	
	Ans=No1+No2;                  //Berij keli by ALU
	
	return Ans;                   //Jyane call kela tyal vale return dya...
}                                  //Block cha shevat
int main()       //AApl Ghar                  //Ithun program run hoto
{                                 //Block chi suruvat
	int A=10;
	int B=11;                      // Local variables of main
	int C=0;
	                               //C mhanje rikami pishvi
	C=Addition(A,B);               //Function call (Addition navach dukan) 
	
	printf ("%d",C);              //Gharchyanna bolun sanga ki kay zal te...
	
	return 0;                     //OS la kalva ki sagl nit zal
}                                 //Block cha shevat