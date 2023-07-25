#include <stdio.h>
#include <stdlib.h>

int main()
{
	//system("calc"); //windows平台
	system("ls -l"); //Linux平台, 需要头文件#include <stdlib.h>
	printf("hello world!");
	return 0;
}
