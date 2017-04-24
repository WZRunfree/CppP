#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item1, item2;
	std::cout<<"inout two record with the same isbn:"<<std::endl;
	std::cin>>item1>>item2;
	if(compareIsbn(item1, item2))
		std::cout<<item1 + item2<<std::endl;
	else
		std::cout<<"diferent ISBN."<<std::endl;

	return 0;
}