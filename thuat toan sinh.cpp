#include <bits/stdc++.h>
using namespace std;
int a[100],ok,n;
void ktao(){
	for(int i=0;i<n;i++) a[i]=0;
}
void sinh(){
	int i=n-1;
	while(i>=0 && a[i]==1){
		a[i]=0;
		i--;
	}
	if(i<0){
		ok=0; // cau hinh cuoi cung
	}
	else a[i]=1;
}
bool check(){
	string s;
	string ss;
	for(int i=0;i<n;i++){
		s+=(a[i]+'0');
	}
	ss=s;
	reverse(ss.begin(),ss.end());
	return ss==s;
}
int main(){
	ok=1;
	cin>>n;
	ktao();
	while(ok){
		if(check()){
			for(int i=0;i<n;i++) cout<<a[i]<<" ";
			cout<<endl;
		}
		sinh();
	}
}