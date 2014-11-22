#include <iostream>
#include "stack2.h"

int main()
{
	Stack<int> s(10);
	s.push(1);
	s.push(2);
	while(s.size() != 0){
		std::cout << s.top() << std::endl;
		s.pop();
	}
	getchar();
}
