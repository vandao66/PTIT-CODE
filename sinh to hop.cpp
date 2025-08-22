#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<int> a;
int ok=0;
void ktao(){
	for(int i=0;i<k;i++) a[i]=i+1;
}
void sinh(){
	int i=k-1;
	while(i>=0 && a[i]==n-(k-i-1)) i--;
	if(i<0){
		ok=1;
	}
	else{
		a[i]++;
		for(int j=i+1;j<k;j++) a[j]=a[j-1]+1;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		a.resize(k);
		ktao();
		while(!ok){
			for(int i=0;i<k;i++) cout<<a[i];
			cout<<" ";
			sinh();
		}
		cout<<endl;
		ok=0;
	}
	return 0;
}