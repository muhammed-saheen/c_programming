#include<stdio.h>
int main(){

int n,f;
printf("enter the number");
scanf("%d",&n);
f=fact(n);
printf("the factorial is : %d",f);
}
int fact(int n)
	{
		if(n==0||n==1)
			return 1;
		else 
		{
			return n*fact(n-1);
		}
}
