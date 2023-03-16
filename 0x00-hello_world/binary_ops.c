#include<stdio.h>

int main()
{
	char b1=0b00000010;
	char b2=0b00000011;
	char b3=b1 & b2;
	printf("b1=%d\n",b1);
	printf("b2=%d\n",b2);
	printf("b3=%d\n",b3);
           return(0);
}

