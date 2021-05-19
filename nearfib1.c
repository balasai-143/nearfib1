#include<stdio.h>
int near_fib(int n)
{
	int c,d,a=0,b=1;
	while(c<n)
	{
		d=c;
		c=a+b;
		a=b;
		b=c;
		if(c==n)
		return 4;
	}
	if(c-n>n-d)
	return d;
	else if(n-d==c-n){
	printf("%d\t",d);
	return c;
	}
	else
	return c;
	
}
int main()
{
	int n,i;
	scanf("%d",&n);
	i=near_fib(n);
	if(i==4)
	printf("True");
	else
	printf("%d",i);
	return 0;
}