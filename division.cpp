#include<iostream>
#include<cstdlib>

class Demo
{
public:
	int a;
	int b;
	int c;
	Demo()
	{
	}
	Demo(int a,int b,int c)
	{
		this->a=a;
		this->b=b;
		this->c=c;
	}
	
	//operator overloading call
   Demo& operator/( Demo& ref)
	{
		static Demo temp;
		temp.a=this->a/ref.a;
		temp.b=this->b/ref.b;
		temp.c=this->c/ref.c;
		return temp;
	}
};

int main()
{
	Demo d1(10,20,30);
	Demo d2(2,3,6);
	Demo d3=d1/d2;
	std::cout<<"the overloaded division operator is:-"<<std::endl;
	std::cout<<d3.a<<std::endl<<d3.b<<std::endl<<d3.c;
	return 0;
}