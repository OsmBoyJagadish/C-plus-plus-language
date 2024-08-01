pura galat hai	
#include<iostream>
using namespace std;
const int m=50;

class ITEMS{
	int itemcode[m];
	float itemprice[m];
	int count;
	
	public:
		void CNT(void){
			count=0;
		}
		void getitem(void);
		void displaysum(void);
		void remove(void);
		void displayitem(void);		
};
void ITEMS::getitem(void){
	cout<<"enter item code : ";
	cin>>itemcode[count];
	
	cout<<"enter item cost : ";
	cin>>itemprice[count];
}
void ITEMS::displaysum(void){
	float sum=0;
	for(int i=0;i<count;i++)
	sum=sum+itemprice[i];
	cout<<endl<<"total value : "<<sum<<endl;	
}
void ITEMS::remove(void){
	int a;
	cout<<"enter item code";
	cin>>a;
	for(int i=0;i<count;i++)
	if (itemcode[i]==a)
	itemprice[i]=0;
}
void ITEMS::displayitem(void){
	cout<<endl<<"code price : ";
	for(int i=0;i<count;i++){
		cout<<endl<<itemcode[i];
		cout<<" "<<itemprice[i];
	}
	cout<<endl;
}
int main(){
	ITEMS order;
	order.CNT();
	int x;
	
	do{
		cout<<endl<<"you can do the following"<<endl;
		cout<<"enter appropriate number";
		cout<<endl<<"1:add an item";
		cout<<endl<<"2:display total value";
		cout<<endl<<"3:delete an item";
		cout<<endl<<"4:display all item";
		cout<<endl<<"5:quit";
		cout<<endl<<"what is your option ";
		cin>>x;
		
		switch(x){
			case1 : order.getitem(); break;
			case2 : order.displaysum(); break;
			case3 : order.remove(); break;
			case4 : order.displayitem(); break;
			case5 : break;
			default : cout<<endl<<"error in input; try again";
		}
	}
	
	while(x!=5);
	
	return 0;
}
