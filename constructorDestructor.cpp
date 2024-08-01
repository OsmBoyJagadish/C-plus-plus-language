#include<iostream>
using namespace std;

class student{
	public:
		int rollNo;
		double fee;
		
		~student(){
			cout<<"i am destructor"<<endl;
		}
		
		student(int r){
			rollNo=r;
			cout<<"hello osm"<<endl;
		}	
		
		student(int rollNo,double fee){
			cout<<"hello jaggu"<<endl;
		}
		
		student(){
			cout<<"hello public"<<endl;
		}
		
		void studying(){
			cout<<"student is studying and rollNo is"<<rollNo<<endl;
		}
		
		void feeDetails(){
			cout<<"student fee amount is"<<fee<<endl;
		}
		
};

int main(){
	
	student s1;
	s1.studying();
	
	student s2(100);
	s2.studying();
		
	return 0;
}



