#include<iostream>
using namespace std;
void callbyreference(int *i);
void callbyvalue(int no);

int main(){
	int j=20,*p,k;
	k=j;
	p=&j;
//	callbyvalue(k);
	callbyreference(p);
	cout<<endl<<j;
	
	return 0;
}

void callbyvalue(int no){
	cout<<no;
	no++;
	cout<<endl<<no;
	
}

void callbyreference(int *i){
	cout<<"old value : "<<*i;
	(*i)++;
	cout<<endl<<"new value : "<<*i;
	
}
