#include<stdio.h>
int main(){
	int b,n,i,r,digit,p,count=0;
	char a[100];
	printf("enter the number:\n");
	scanf("%d",&n);
	printf("enter the base to be converted:\n");
	scanf("%d",&b);
	p=n;
	do{
		r=p%b;
		digit='0'+r;
		if(digit>'a')
			digit=digit+7;
		a[count]=digit;
		count++;
		p=p/b;
	}
	while(p!=0);
	printf("\n base %d equalent of num %d is ",b,n);
	
	for(i=count-1;i>=0;--i)
		printf("%c",a[i]);
	printf("\n");
		
}
