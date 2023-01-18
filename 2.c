#include <stdio.h>

int main()
{
	print(10);
	
}
void print(int n)
	{
		if(n==0)
		return;
		
		printf("%d",n);
		print(n-1);
	}
