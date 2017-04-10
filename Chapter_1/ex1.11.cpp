// * Exercise1.11 in page 11.
#include <iostream>

int main()
{
	std::cout<<"please input two numbers:"<<std::endl;
	int v1, v2;
	std::cin>>v1>>v2;
	int temp=0;
	if (v1>v2){
		temp=v1; v1=v2; v2=temp;
	}
	temp=v1;
	while(temp <= v2){
		std::cout<<temp<<std::endl;
		temp++;
	}
}