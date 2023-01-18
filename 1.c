#include <stdio.h>

int main()
{
	print(10);
	
}
void print(int n)
	{
		if(n==0)
		return;
		print(n-1);
		printf("%d",n);
	}
