#include<iostream>
using namespace std;
class floats{
	float m,n;
	public:
		floats(float,float);
		void display(void){
			cout<<"m="<<m<<endl;
			cout<<"n="<<n<<endl;
		}
};
floats::floats(float x,float y){
	m=x; n=y;
}
int main(){
	floats f1(2.34,3.34);
	floats f2=floats(12.34,13.34);
	
	cout<<"OBJECT 1"<<endl;
	f1.display();
	
	cout<<"OBJECT 2"<<endl;
	f2.display();	
	
	return 0;
}
