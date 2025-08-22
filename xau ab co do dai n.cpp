#include <bits/stdc++.h>
using namespace std;
int n;
void dequy(string s,int l){
	if(l==n){
		cout<<s<<" ";
		return;
	}
	dequy(s+"A",l+1);
	dequy(s+"B",l+1);
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		string s="";
		dequy(s,0);
		cout<<endl;
	}
}
