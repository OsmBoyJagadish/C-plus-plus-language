#include<iostream>
using namespace std;

class Student
{
	protected:
		int roll_number;
		public:
			void get_number(int);
			void put_number(void);
			
};
void Student::get_number(int a)
{
	roll_number=a;
	
}
void Student:: put_number()
{
	cout<<"Roll Number:"<<roll_number<<endl;
	
}
class test:public Student
{
	protected:
		float sub1;
		float sub2;
		public:
			void get_marks(float,float);
			void put_marks(void);
			
};
void test::get_marks(float x,float y)
{
sub1=x;
sub2=y;

}
void test ::put_marks()
{
	cout<<"Marks in SUB1="<<sub1<<endl;
	cout<<"Marks in SUB2="<<sub2<<endl;
	
}
class result:public test
{
	float total;
	public:
		void display(void);
		
};
void result::display(void)
{
	total=sub1+sub2;
	put_number();
	put_marks();
	cout<<"Total="<<total<<endl;
	
}
int main()
{
	result student1;
	result student2;
	
	student1.get_number(8);
	student1.get_marks(75.0,59.5);
	student1.display();
	
	student2.get_number(800);
	student2.get_marks(85.0,99.5);
	student2.display();
return 0;
	}


