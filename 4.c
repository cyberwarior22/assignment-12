#include <stdio.h>

int main()
{
	print(10);
	
}
void print(int n)
	{
		if(n !=0)
		{
			
		 printf("%d ", 2 * n - 1);
		 print(n-1);
		}
	
	}


