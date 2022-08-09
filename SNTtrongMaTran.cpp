//liet ke cac so nguyen to trong ma tran
#include<bits/stdc++.h>
using namespace std;
void nhap(int n,int m,int a[][100]){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){ cin>>a[i][j];
		}
	}
}
bool snt(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
void ham(int n,int m,int a[][100]){
	map<int ,int>mp;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		if(snt(a[i][j])==true && mp[a[i][j]]==0){
			cout<<a[i][j]<<" ";
			mp[a[i][j]]=1;
		}
		}
}cout<<endl;
}
int main(){
	int n,m;
	int a[100][100];
	cin>>n>>m;
	nhap(n,m,a);
	ham(n,m,a);

return 0;}
