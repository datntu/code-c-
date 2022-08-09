//quicksort
#include<bits/stdc++.h>
using namespace std;
void nhap(int n,int a[]){
for(int i=0;i<n;i++) cin>>a[i];
}
int partition(int a[],int l,int r){
	int vipot=a[r];
	int i=l-1;
	for(int j=l;j<r;j++){
	if(a[j]<=vipot){
	i++;
	swap(a[i],a[j]);
	
	}
	}
	i++;
	swap(a[i],a[r]);
	return i;// tra ve vi tri cua chot
}
void quicksort(int a[],int l,int r){
	if(l>=r) return ;
	int p=partition(a,l,r);
	quicksort(a,l,p-1);
	quicksort(a,p+1,r);
}
int main(){
	int n; cin>>n;
	int a[100];
	nhap(n,a);
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
return 0;}
