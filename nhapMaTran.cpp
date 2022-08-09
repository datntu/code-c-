// khai bao mang hai chieu roi in ra man hinh
#include<bits/stdc++.h>
using namespace std;
void nhap(int n,int m,int a[][100]){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){ cin>>a[i][j];
	}
}
}
void xuat(int n,int m,int a[][100]){
	for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
	cout<<a[i][j]<<" ";
	}
	cout<<endl;
	}
}
int main(){
 int n,m;
 cin>>n>>m;
 int a[100][100];
 nhap(n,m,a);
 xuat(n,m,a);

return 0;
}
