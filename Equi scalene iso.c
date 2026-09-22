#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three sides of a triangle \n");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b==c){
		printf("Forms an equilateral triangle \n");
	}
	else if(a==b||a==c||b==c){
		printf("Forms an iso");
	}
	else{
		printf("forms an scalene");
	}
	return 0;
}
