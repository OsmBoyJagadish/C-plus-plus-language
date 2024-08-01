#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e;
	
	cout<<"------------------------------------------WELCOME TO OSM FALOODA CENTRE----------------------------------------------";
	cout<<"\n \n our menu is : \n ";
	cout<<"1) cone \n 2) falooda \n 3) chocobar \n 4) shakes \n 5) badam pista \n 6) mix flavour ";
    cout<<"\n \n which one you want sir/mam, just select the number : ";
	cin>>a;
	
	if(a==1){
		cout<<"cones are available in two flavours \n vanilla = 30rs \n chocolate = 50rs";
		cout<<"\n \n how much money you have ? ";
		cin>>b;
		if(b==30){
			cout<<"\n pay the bill and take one vanilla flavoured cone \n THANK YOU, VISIT AGAIN";
		}else if(b==50){
			cout<<"\n pay the bill and take one chocolate flavoured cone \n THANK YOU, VISIT AGAIN";
		}else{
			cout<<"Sorry, not available";
		}
	}else if(a==2){
		cout<<"falooda is available in mini and jumbo glass \n mini glass = 40rs \n jumbo glass = 60rs";
		cout<<"\n \n how much money you have ? ";
		cin>>c;
		if(c==40){
			cout<<"\n pay the bill and take one mini glass \n THANK YOU, VISIT AGAIN";
		}else if(c==60){
			cout<<"\n pay the bill and take one jumbo glass \n THANK YOU, VISIT AGAIN";
		}else{
			cout<<"Sorry, not available";
		}
	}else if(a==3){
		cout<<"chocobar special offer \n 1 chocobar for 5rs \n 3 chocobars for just 10rs";
		cout<<"\n \n how much money do you have ? ";
		cin>>d;
		if(d==5){
			cout<<"\n pay the bill and take 1 chocobar \n THANK YOU, VISIT AGAIN";
		}else if(d==10){
			cout<<"\n pay the bill and take 3 chocobars \n THANK YOU, VISIT AGAIN";
		}else{
			cout<<"Sorry, not available";
		}
	}else if(a==4){
		cout<<"\n we have different flavoured shakes \n 1] chocolate shake = 80rs \n 2] vanilla shake = 70rs \n 3] milk shake = 60rs";
		cout<<"\n \n how much money do you have ? ";
		cin>>e;
		if(e==80){
			cout<<"\n pay the bill and take your chocolate shake \n THANK YOU, VISIT AGAIN";
		}else if(e==70){
			cout<<"\n pay the bill and take your vanilla shake \n THANK YOU, VISIT AGAIN";
		}else if(e==60){
			cout<<"\n pay the bill and take your milk shake \n THANK YOU, VISIT AGAIN";
     	}else{
     		cout<<"sorry, not available";
		 }
	}else if(a==5){
		cout<<"\n badam pista = 60rs ";
		cout<<"\n pay the bill and take your badam pista \n THANK YOU, VISIT AGAIN";
	}else if(a==6){
		cout<<"\n mix flavour = 100";
		cout<<"\n pay the bill and take mix flavoured falooda \n THANK YOU, VISIT AGAIN";
	}
  return 0;
}
