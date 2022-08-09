//liet ke K phan tu lon nhat
#include<bits/stdc++.h>
using namespace std;

void nhap(int n,int a[]){
for(int i=0;i<n;i++) cin>>a[i];
}
 int partion(int a[],int l,int r){
  int pivot=a[r];
  int i=l-1;
  for(int j=l;j<r;j++){
  if (a[j]<=pivot){
  i++;
  swap(a[i],a[j]);
  }
  } i++;
  swap(a[i],a[r]);
  return i;// tra ve vitri
 }
 void quicksort(int a[],int l,int r){
 if(l>=r) return;
 int p=partion(a,l,r);
 quicksort(a,l,p-1);
 quicksort(a,p+1,r);
 }
 void hien_thi(int n,int a[],int k){
 	for(int i=n-1;i>=n-k;i--) cout<<a[i]<<" ";
 }
 int main(){
 	int n; cin>>n;
 	int a[100];
 	nhap(n,a);
 	int k; cin>>k;
 	quicksort(a,0,n-1);
 	hien_thi(n,a,k);
 return 0;
 }
