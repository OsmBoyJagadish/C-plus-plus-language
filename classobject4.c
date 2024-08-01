#include<iostream>
using namespace std;
class dynamic{
	private:
		char name[10]="dynamic";
	public:
	    int offerpercent;
	protected:
	    int salary;
	public:
	    void showname(){
	    	cout<<endl<<"name is"<<name;
		}				
};

int main(){
	dynamic d1;
	d1.showname();
	d1.offerpercent=50;
	cout<<endl<<d1.offerpercent;
	//d1.salary=1000;
	//cout<<d1.offerpercent;
	return 0;
}
