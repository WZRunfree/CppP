//类型别名typedef指代复合类型
#include <iostream>

int main()
{
	// printf("hello world!\n");
	typedef char *pstring;
	char i = 'i', j = 'j';
	const pstring cstr = &i;  //指向char类型的常量指针，顶层指针 "等价于" char *const pi = &i;
	const char *p = &i;  //指向const char的指针，底层指针
	char *const pi = &i;  //指向char类型的常量指针，底层指针
	std::cout<<cstr<<'\t'<<*cstr<<'\t'<<p<<'\t'<<*p<<'\t'<<pi<<'\t'<<*pi<<std::endl;
	// p = &j;  //succese
	// cstr = &j;  //error: read-only variable
	// pi = &j;  //error: read-only variable
	// *p = 't';  //error: read-only variable
	// *cstr = 't';  //succese
	*pi = 't';  //succese
	std::cout<<cstr<<'\t'<<*cstr<<'\t'<<p<<'\t'<<*p<<'\t'<<pi<<'\t'<<*pi<<std::endl;

	return 0;
}