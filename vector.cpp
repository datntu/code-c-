//cách sử dụng vecto trong c++
//vecto<khieu du lieu>ten vecto
//push_back();
//size() cho biet kich thuoc cua vecto
// truy cap cac vector thong qua chi so
//duyet
#include<bits/stdc++.h>
using namespace std;

/*int main(){
vector<int >dat;
dat.push_back(2);
dat.push_back(10);
cout<<dat.size()<<endl;
cout<<"phan tu dau tien cua mang la: "<<dat[0]<<endl;
cout<<"pahn tu cuoi cung cua mang la: "<< dat[dat.size()-1]<<endl;
return 0;
}*/
int main(){
int n;cin>>n;
vector<int>a;
for(int i=0;i<n;i++){
	int x;cin>>x;
	a.push_back(x);
}
for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
}cout<<endl;
return 0;
}
