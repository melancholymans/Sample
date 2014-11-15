#include <iostream>
#include <string>
#include "stack1.hpp"

int main()
{
	std::string str;

	Stack<int> s;
	s.push(1);
	s.push(123);
	s.push(458);
	s.push(69);
	std::cout << s.top() << std::endl;
	Stack<std::string> ss;

	ss.push("abs");
	ss.push("log");
	std::cout << ss.top() << std::endl;

	std::cin >> str;
	return 0;
}