#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<=s.length();i++){
		s[i]=tolower(s[i]);
		cout<<s[i];
} return 0;
}
