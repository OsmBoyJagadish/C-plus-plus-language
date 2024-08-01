#include<iostream>
using namespace std;

class dynamic{
	
	int fees;
	char subject;
	public:
		void getdata(int a,char b);
		void putdata(void)
		{
			cout<<"fees :"<<fees<<endl;
			cout<<"subject :"<<subject<<endl;
	    }
};

void dynamic :: getdata(int a,char b)
{
	fees = a;
	subject = b;
}

int main()
{
	
	dynamic d1;
	cout<<endl<<"object d1"<<endl;
	
	d1.getdata(4000,'c');
	d1.putdata();
	
	dynamic d2;
	cout<<endl<<"object d2"<<endl;
	
	d2.getdata(8000,'j');
	d2.putdata();
	
	return 0;
}
