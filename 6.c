#include <stdio.h>

int main()
{
	print(10);
	
}
void print(int n)
	{
		if(n !=0)
		{
			
		 printf("%d ", 2 * n );
		 print(n-1);
		}
	
	}


