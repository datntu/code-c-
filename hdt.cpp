#include<bits/stdc++.h>
using namespace std;

class Student {
public:
	string name;
	int age;

	void getInformation(){
	cin>> name;
	cin>> age;
}
	void display(){
	cout<<"name: "<<name <<endl;
	cout<<"age"<<age<<endl;
	}
	};
int main(){
	Student s1;
	s1.getInformation();
	s1.display();
	return 0;
	}

