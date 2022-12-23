#include<iostream>
using namespace std;
class Shape{
	protected:
		int length;
		int height;
		int width;
	public:
		Shape(int l,int w,int h){
			length = l;
			height=h;
			width =w;
		};
		void display(){
			cout<<"shape length = "<<length<<endl;
		};
};

class Circle : public Shape{
	private:
		int radius;
		int length;
	public:
	Circle(int r,int l){
			length = l;
			radius = r;
		};
		display(){
			cout<<"circle length = "<<length<<"radius is "<<radius<<endl;
		};
};

int main(){
	
	
	return 0;
}




