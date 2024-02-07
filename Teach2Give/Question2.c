//Question2 Write a program to generate the Fibonacci sequence up to 100.
#include<stdio.h>
int main (){
   int t1=0,t2=1,nextTerm=0;

	printf("Fibonacci Series:%d,%d, ",t1,t2);
	nextTerm=t1+t2;
	while(nextTerm<=100){
		printf("%d, ",nextTerm);
		t1=t2;
		t2=nextTerm;
		nextTerm=t1+t2;
	}
	return 0;
}