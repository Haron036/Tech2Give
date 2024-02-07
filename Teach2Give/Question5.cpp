/* Question5 Write a program that takes an integer as input and returns an integer with reversed digit ordering.
*/
#include<iostream>
#include<cmath>
int reverseDigits(int num){
	int reversed=0;
	while(num!=0){
		int digit=num%10;
		reversed= reversed*10+digit;
		num/=10;
	}
	return reversed;
}
int main(){
	int num;
	std::cout<<"Enter an integer:";
	std::cin>>num;
	int reversed=reverseDigits(num);
	if(num<0){
		std::cout<< "-" << (reversed) << std::endl;
	}else{
		std::cout<<reversed<<std::endl;
	}
	return 0;
}
