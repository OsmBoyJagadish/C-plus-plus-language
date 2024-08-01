#include<iostream>
using namespace std;

class dynamic{
	
	int id;
	float fees;
	public:
		void getdata(int a,float b);
		void putdata(void)
		{
			cout<<"id :"<<id<<endl;
			cout<<"fees :"<<fees<<endl;
	    }
};
void dynamic :: getdata(int a,float b)
{
	id = a;
	fees = b;
}

int main()
{
	
	dynamic d1;
	cout<<endl<<"object d1"<<endl;
	
	d1.getdata(1,1000);
	d1.putdata();
	
	dynamic d2;
	cout<<endl<<"object d2"<<endl;
	
	d2.getdata(2,5000);
	d2.putdata();
	
	return 0;
}









