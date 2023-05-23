class Demo
{
	int a,b,c;
	friend std::ostream operator<<(std::ostream,Demo);
	friend std::istream operator>>(std::istream,Demo);
};

std::ostream& operator<<(std::ostream& os,Demo d)
{
	os<<d.a<<std::endl;
	os<<d.b<<std::endl;
	return os;
}

std::istream operator>>(std::istream& is,Demo& d)
{
	is<<d.a;
	is<<d.b;
	return is;
}

int main(int argc,char const *argv[])
{
	Demo d1,d2;
	std::cin>>d1>>d2;
	std::cout<<d1<<d2;
return 0;

	
}