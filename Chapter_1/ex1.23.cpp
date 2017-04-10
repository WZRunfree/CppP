#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item1, temp;
	std::cout<<"inout several records with the same isbn:"<<std::endl;
	if(std::cin>>item1){
		int num=1;
		while(std::cin>>temp){
			// if(compareIsbn(item1, temp)){
			if(item1.isbn() == temp.isbn()){
				item1 += temp;
				num++;
			}
			else{
				std::cout<<item1.isbn()<<"\thave\t"<<num<<" records"<<std::endl;
				std::cout<<item1<<std::endl;
				item1 = temp;
				num = 1;
			}
		}
		std::cout<<item1.isbn()<<"\thave\t"<<num<<"\trecords"<<std::endl;
		std::cout<<item1<<std::endl;
	}
	else{
		std::cout<<"there is no record!"<<std::endl;
		return -1;
	}
	return 0;
}