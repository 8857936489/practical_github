#include<iostream>
class Demo
{
public:
	int a;
	Demo()
	{
	}
	Demo(int a)
	{
		this->a=a;
	}
	
	Demo& operator()()
	{
		std::cout<<"this is the function overloaded operator"<<std::endl;
	}
	Demo& operator()(int a)
	{
		std::cout<<"this is the another function overloaded operator";	
	}	
};

int main()
{
	Demo d(10);
	d();
	Demo d1;
	d1();
	
	return 0;
}