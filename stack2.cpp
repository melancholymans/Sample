#include "stack2.h"

template<class T>
Stack<T>::Stack(int n):capacity(n),index(0)
{
	data = new T[capacity];
}

template<class T>
Stack<T>::~Stack()
{
	delete[] data;
}

template<class T>
void Stack<T>::push(T x)
{
	if(index < capacity){
		data[index++] = x;
	}
}

template<class T>
T Stack<T>::top() const
{
	return data[index -1];
}

template<class T>
void Stack<T>::pop()
{
	if(index > 0){
		--index;
	}
}

template<class T>
int Stack<T>::size() const
{
	return index;
}

template class Stack<int>;
