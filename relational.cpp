#include<iostream>
class Demo
{
	public:
		int a,b,c;
		Demo()
		{
		
		}
		Demo(int a,int b, int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		bool operator<(const Demo& ref)
		{
			this->a < ref.a;
			this->b < ref.b;
			this->c < ref.c;
			return(this->a < ref.a && this->b < ref.b && this->c < ref.c);
		}
};

int main()
{
	Demo d1(10,20,30);
	Demo d2(40,50,60);
	if(d1<d2)
	{
		std::cout<<"true";	
	}
	else
	{
		std::cout<<"false";
	}
	
	
	return 0;
}