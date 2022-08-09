//xâu kí tự trong c++
#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin>>n; // vẫn còn phims enter
 cin.ignore(1); //xóa một kí tự enter. (1) là số kí tự cần xóa.
 string s;
 getline(cin,s);
 cout<<s.length()<<endl;
 cout<<s<<endl;
 
 return 0;
 }
