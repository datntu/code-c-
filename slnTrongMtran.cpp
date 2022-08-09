//tìm phần tử lớn nhất trong ma trận
#include<bits/stdc++.h>
using namespace std;

void nhap(int n,int m,int a[][100]){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cin>>a[i][j];
	}
}
int find(int n,int m, int a[][100]){
	int max_value=INT_MIN;
	for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		max_value= max(max_value,a[i][j]);}}
	return max_value;
}
// vị trí xuất hiện của phần tử lớn nhất
void viTri(int n,int m,int a[][100]){
	for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		if(find(n,m,a)==a[i][j]){
		cout<< "vị trí lớn nhất là: "<<"A[ "<<i+1<<"]"<<"["<<j+1<<"]"; 
		} cout<<endl;
		}
}
}

int main(){
int n,m;
cin>>n>>m;
int a[100][100];
nhap(n,m,a);
int k=find(n,m,a);
cout<<k;
cout<<endl;
viTri(n,m,a);
return 0;
}
