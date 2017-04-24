// 当时用isteam对象作为条件时，其效果是检测流的状态
// istream变为无效（即条件为否）的两种情况：
// 1. 文件结束符（end-of-file）：ctrl+z or ctrl+d
// 2. 无效输入：如输入数据类型
#include <iostream>

int main()
{
	std::cout<<"please input numbers:"<<std::endl;
	int sum=0, value=0;
	while(std::cin>>value){
		sum += value;
	}
	std::cout<<"the sum is:"<<sum<<std::endl;
	return 0;
}