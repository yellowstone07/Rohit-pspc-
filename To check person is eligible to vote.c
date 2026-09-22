#include<stdio.h>
int main()
{
	int a;
	printf("Enter age of the person\n");
	scanf("%d",&a);
	if(a>=18){
		printf("Person is eligible to vote");
	}
	else{
		printf("Person is not eligible to vote");
	}
	return 0;
}
