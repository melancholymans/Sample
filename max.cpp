#include <iostream>
#include <string>
#include "max.hpp"

int main()
{
	int i = 42;
	int k = 64;
	int const N = 100;
	int* const bookmark = &i;	//int変数を指すポインタ変数bookmarkが定数となる


	const int n = 25;
	std::string str;

	std::cout << ::max(7,1) << std::endl;
	std::cout << *bookmark << std::endl;
	//bookmark = &k;	コンパイラーエラー
	i = 24;		//ポインタbookmarkは定数なので変更できないが,ポインタが指している変数は変更できる
	std::cout << *bookmark << std::endl;

	getchar();
	return 1;
}