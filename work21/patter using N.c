#include<stdio.h>

int main(){
		int n,i=1;
		printf("enter the number");
		scanf("%d",&n);
		for(i=10;1<n;i*=10)
		for(i=i/10;n>0;i/=10)
		{
			printf("%d \n",n);
			n%=i;
		}
		
	
	
}

