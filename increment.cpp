#include<iostream>
#include<cstdlib>
class Demo
{
public:
	int a,b,c;
	Demo()
	{
		
	}
	Demo(int a,int b,int c)
	{
		this->a=a;
		this->b=b;
		this->c=c;
	}
	
     Demo&	operator++(int)
	{
	      Demo *obj=(Demo*)malloc(sizeof(Demo));	
		obj->a = this->a;
		obj->b = this->b;
		obj->c = this->c;
		(this->a)++;
		(this->b)++;
		(this->c)++;
		return *obj;
	}
	
Demo&	operator++()
	{
		(this->a)++;
		(this->b)++;
		(this->c)++;
		return *this;
	}
};

int main()
{
	Demo d1(10,20,30);
	Demo d2(40,50,60);
	Demo d3;
	Demo d4;
	d3=d1++;
	d4=++d2;
	
	std::cout<<"post increment overloaded operator is"<<std::endl;
	std::cout<<d3.a<<std::endl<<d3.b<<std::endl<<d3.c<<std::endl;
	
	std::cout<<"pre increment overloaded operator is"<<std::endl;
	std::cout<<d4.a<<std::endl<<d4.b<<std::endl<<d4.c<<std::endl;



	return 0;
}