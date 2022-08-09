//bài toán tính giai thừa
#include<bits/stdc++.h>
using namespace std;

int giaiThua(int n){
	if(n==0 || n==1) return 1;
	else n * giaiThua( n-1 );
}
int main(){
int n; cin>>n;
int k = giaiThua(n);
cout<<k<<endl;
return 0;
}
