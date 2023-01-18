#include<stdio.h>
int main()
{
	binary(14);
	return 0;
}

void binary(int n)
{
	if(n!=0)
	{
			binary(n/2);
		printf("%d",n%2);
	}
		
	
	
}

