#include<iostream>

class Customer{
	
	
	public:
	string name;
	int age;	
	
	Customer(string m,int n){
		name=m;
		age=n;
	}
};

int main(){
	Customer c = Customer("Dhanuka",200);//Explicit call
	std::cout<<"A value is "<<c.a<<"B value is "<<c.b<<std::endl;

}
