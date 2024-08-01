#include<iostream>
using namespace std;
class ok{
	public:
		void fun(){
			cout<<"fun() called";
		}
};
//void ok::fun(){
//	cout<<"fun() called";
//}

int main(){
	ok b;
	b.fun();
		
	return 0;
}
