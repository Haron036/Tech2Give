/*Write a program that accepts a string as input, capitalizes the first letter of each word in the string, and then returns the result string.*/
#include <iostream>
#include<string>

std::string  capitalizeFirstLetter( std::string str){
	for(size_t i=0;i<str.length();++i){
		if(str[i]==' '){
			if(i+1<str.length()){
				str[i+1]=toupper(str[i+1]);
			}
		} else if(i==0){
			str[0]=toupper(str[0]);
		}
	}
	return str;
}
int main(){
	std::string input;
	std::cout<<"Enter a string:";
	std::getline(std::cin,input);
	std::string result=capitalizeFirstLetter(input);
	std::cout<<"capitalize string:"<<result<< std::endl;
	return 0;
}