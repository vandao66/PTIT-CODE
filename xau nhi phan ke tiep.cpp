#include <bits/stdc++.h>
using namespace std;
int n,cnt=0;
void solve(int len,string s){
	if(len==n){
		cnt++;
		if(cnt%2==0) cout<<cnt<<": "<<s<<endl;
		return;
	}
	if(len>n) return;
	solve(len+1,s+"0");
	solve(len+1,s+"1");
	solve(len+1,s+"2");
}
int main(){
	cin>>n;
	solve(0,"");
	return 0;
}