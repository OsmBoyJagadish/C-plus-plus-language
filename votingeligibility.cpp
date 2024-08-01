#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"please check your eligibility of voting : ";
	cin>>age;
	if(age<18){
		cout<<"you are not eligible for voting";
	}else{
		cout<<"you are eligible for voting";
	}
	
	return 0;
}
