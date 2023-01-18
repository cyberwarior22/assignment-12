#include<stdio.h>

void print(int n)
{
	if(n!=0)
	print(n/8);
		printf("%d",n%8);
				
	
}
   
   
   
int main()
{
 print(9);
	return 0;
}


