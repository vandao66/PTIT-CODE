#include <bits/stdc++.h>
using namespace std;
int n;
vector<string> ans;
void solve(int len,string s){
	if(len==n){
		int check=1;
		for(int i=1;i<s.length();i++){
			if(s[i]=='H' && s[i-1]=='H') check=0;
		}
		if(s[0]!='A' && s[s.length()-1]!='H' && check) ans.push_back(s);
		return;
	}
	solve(len+1,s+"H");
	solve(len+1,s+"A");
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ans.clear();
		cin>>n;
		solve(0,"");
		sort(ans.begin(),ans.end());
		for(string a:ans) cout<<a<<endl;
	}
}