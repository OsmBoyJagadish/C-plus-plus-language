#include<iostream>
using namespace std;

class dynamic{
	
	private:
		char name[10]="dynamic";
	public:
	    int offerpercent;
	private:
	    int salary=1000;
	public:
	    void showname(){
	    	cout<<"name is "<<name;
		}
	public:
	    void sal(){
	    	cout<<endl<<"salary is "<<salary;
		}
};

int main(){
	dynamic d1;
	d1.showname();
	d1.offerpercent=50;
	cout<<endl<<d1.offerpercent;
	d1.sal();
	
	return 0;
}
