//Question3Write a program that takes an integer as input and returns true if the input is a power of two.
#include<stdio.h>
int isPowerofTwo(int n){
	if (n<=0){
		return 0;
	}
	while ((n&1)==0){
		n>>=1;
		
	}
	return n=1;
}
int main (){
	int num;
	printf("Enter an integer:");
	scanf("%d",&num);
	if (isPowerofTwo(num)){
		printf("%d is a power of two.\n",num);
	}else
	{
		printf("%d is not a power of two.\n",num);
}
return 0;
}
