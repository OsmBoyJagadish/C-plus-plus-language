#include<iostream>
using namespace std;
class base{
	
	public:
		base(){
			cout<<"constructor";
		}
	public:
		void sayHello(){
			cout<<"i am base class"<<endl; 
		}
	
};
class child:public base{
	public:
	void sayHello(){
		cout<<endl<<"this is my owm method";
	}
};
int main(){
	child c=child();
	c.sayHello();
	
	return 0;
}
