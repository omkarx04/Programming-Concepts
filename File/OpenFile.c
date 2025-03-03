#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
	char fname[30];
	int fd = 0;
	
	printf("Enter the file name that you want to open \n");
	scanf("%s",fname);
	
	fd = open(fname,O_RDWR);  
	if(fd == -1)        
	{
		printf("Unable to Open file \n");
	}
	else
	{
		printf("File is successfully opened with fd : %d\n",fd);  // 3
	}
	
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