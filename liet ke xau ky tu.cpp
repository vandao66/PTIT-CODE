#include <bits/stdc++.h>
using namespace std;
char c;
int n;
vector<char> a,cur;
void solve(int len,int j){
	if(len==n){
		for(char c: cur) cout<<c;
		cout<<endl;
		return;
	}
	for(int i=j;i<a.size();i++){
		cur.push_back(a[i]);
		solve(len+1,i);
		cur.pop_back();
	}
}
int main(){
	cin>>c>>n;
	a.resize(c-'A'+ 1);
	a[0]='A';
	for(int i=1;i<a.size();i++) a[i]=a[i-1]+1;
	solve(0,0);
}