#include<bits/stdc++.h>
using namespace std;

class hch {
public:
	double width;
	double length;
	void getInformation(){
	cin>>width>> length;
	}
	double dienTich(){
	return width*length;}
	double chuVi(){
	return (width+length)*2;}
	void display(){
	cout<<"dientich= "<<dienTich()<<endl;
	cout<<"chuvi = "<<chuVi()<<endl;
	}
	};
int main(){
	hch s1;
	s1.getInformation();
	s1.display();

return 0;	
}
