#include<iostream>
using namespace std;
int main(){
	int p;
	cout<<"enter your percentage : ";
	cin>>p;
	if(p<35){
		cout<<"sorry you are fail";
	}else if(p==35){
		cout<<"you are pass";
	}else if(p>35 && p<=45){
		cout<<"you got 3rd class percent";
	}else if(p>45 && p<=60){
		cout<<"you got 2nd class percent";
	}else if(p>60 && p<=75){
		cout<<"you got 1st class percent";
	}else if(p>75){
		cout<<"congratulations, you are passed with distinction";
	}
	
	return 0;
}
