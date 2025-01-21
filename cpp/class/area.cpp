#include<iostream>
using namespace std;
class base{
	public:
		virtual double area()=0;
		
};
class circle:public base{
	public:
		double area() override{
			double radius;
			cout<<"Enter the radius: "<<endl;
			cin>>radius;
			double result=3.14*radius*radius;
			cout<<result;
			return result;
		}
};
class rectangle:public base{
	public:
		double area() override{
			int length;
			int breadth;
			cout<<"Enter length: "<<endl;
			cin>>length;
			cout<<"Enter the breadth: "<<endl;
			cin>>breadth;
			double result=length*breadth;
			cout<<"AREA OF RECTANGLE: "<<result<<endl;
			return result;
		}
};
int main(){
	rectangle r;
	r.area();
	circle c;
	c.area();
}