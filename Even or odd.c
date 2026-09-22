#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	if(a%2==0){
		printf("Given no. is even");
	}
	else{
		printf("Given no. is odd");
	}
	return 0;
}
