//w.c.p 2+5+8+11+14...upto n terms . w.c.p to calcute the sum of given series 
#include<stdio.h>

int main()
{
	int n;
	int sum =0;
	int term =2;
	int count =1;
	printf ("enter the number of term (N):")
	Scanf ("%d",&n)
	
	while (count <= n)
	{ 
	sum+=term;
	term+= 3;
	count++;
	}
	printf("the sum of the series up to %d term is : %d\n",n,sum);
	return 0
}
