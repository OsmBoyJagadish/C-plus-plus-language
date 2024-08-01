//Parameterized constructor : if arguements passed
#include<iostream>
using namespace std;
class integer{
	int m,n;
	public:
		integer(int,int); //constructor declared
		void display(void){
			cout<<"m= "<<m<<endl;
			cout<<"n= "<<n<<endl;
		}
};
integer :: integer(int x,int y){ //constructor defined
	m=x; n=y;
}
int main(){
	integer int1(0,100); //constructor called implicitly
	integer int2 = integer(25,75); //contructor called explicitly
	
	cout<<"OBJECT 1"<<endl;
	int1.display();
	
	cout<<endl<<"OBJECT 2"<<endl;
	int2.display();
	
	return 0;
}
