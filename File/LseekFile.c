#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
// #include<unistd.h>

int main()
{
	char fname[30];
	int fd = 0; //ret = 0; 
	char Data[11];
	
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
	
	lseek(fd,-7,0);
	// 1 : File descripter   kashat
	// 2 : Displacement      kitine halchal(In bytes)
	// 3 : from where        kuthun(0 : Start of file   1 : Current position  2 : End of file)
	
	read(fd,Data,6);
	
	write(1,Data,6);
	
	close(fd);
	
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