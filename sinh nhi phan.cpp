#include <bits/stdc++.h>
using namespace std;
int n;
void solve(string s,int i){
	if(i==n){
		cout<<s<<endl;
		return;
	}
	solve(s+"0",i+1);
	solve(s+"1",i+1);
}
int main(){
	cin>>n;
	solve("",0);
}