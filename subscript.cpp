#include<iostream>
#include<cstdlib>
class Demo
{
	int size;
	int *ptr;
	
	Demo(int size)
	{	
	
		this->size=size;	
		this->ptr=(int*)malloc((this->size)*sizeof(int));
	}

	operator[](index)
	{
		if(this->index
	}	

};

int main()
{
	Demo d(5);
	d[3]=10;
	for(i=0;i<5;i++)
	{		
		d[i]=i;	
	}
	
	for(i=0;i<5;i++)
	{
		std::cout<<d[i]<<std::endl;		
	}

	return 0;
}