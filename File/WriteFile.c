#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
// #include<unistd.h>

int main()
{
	char fname[30];
	int fd = 0; //ret = 0; 
	char Data[11] = "Marvellous";
	
	printf("Enter the file name that you want to open \n");
	scanf("%s",fname);
	
	fd = open(fname,O_RDWR);  
	if(fd == -1)        
	{
		printf("Unable to opened file \n");
		return -1;  // Abnormally terminated...
	}
	else
	{
		printf("File is successfully opened with fd : %d\n",fd);  // 3
	}
	
	/*ret =*/ write(fd,Data,10);                     // kashat    kay    kiti....
	/*if(ret == 0)
	{
		printf("Unable to write in file\n");
	}*/
	
	return 0;
}

// 0 for octal........
// User
//Owner     // 4 + 2 +1
//Group
//Other

//Operations
//Read       4
//Write      2
//Execute    1