template <typename T>
class Base{
public:
	void exit();
};

template <typename T>
class Derived : Base <T>{
public:
	void foo(){
		//exit();
		this->exit();
	}
};
