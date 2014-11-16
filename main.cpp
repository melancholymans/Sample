#include <iostream>
#include <string>
#include "this_use.hpp"

void main()
{
	Derived<int> der;
	der.foo();
	getchar();
}