#include <iostream>
#include <string>
#include "max.hpp"

int main()
{
	int i = 42;
	int k = 64;
	int const N = 100;
	int* const bookmark = &i;	//int�ϐ����w���|�C���^�ϐ�bookmark���萔�ƂȂ�


	const int n = 25;
	std::string str;

	std::cout << ::max(7,1) << std::endl;
	std::cout << *bookmark << std::endl;
	//bookmark = &k;	�R���p�C���[�G���[
	i = 24;		//�|�C���^bookmark�͒萔�Ȃ̂ŕύX�ł��Ȃ���,�|�C���^���w���Ă���ϐ��͕ύX�ł���
	std::cout << *bookmark << std::endl;

	getchar();
	return 1;
}