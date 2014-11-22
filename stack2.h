#ifndef STACK_H
#define STACK_H

template <class T>
class Stack{
	T* data;
	int index;
	int capacity;
public:
	explicit Stack(int n);
	~Stack();
	void push(T x);
	T top()	const;
	void pop();
	int size() const;
};
#endif
