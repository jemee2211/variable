#include<stdio.h>

main(){
	
	int a;
	int b;
	
	printf("Enter value A:");
	scanf("%d",&a);
	
	printf("Enter Value B:");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=b-a;
	printf("A:%d\n",a);
	printf("B:%d",b);
	
}
