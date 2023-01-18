#include<stdio.h>

void print(int n)
{
	if(n!=0)
	
		printf("%d",n%10);
			print(n/10);	
	
}
   
   
   
int main()
{
 print(987);
	return 0;
}


