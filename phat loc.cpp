#include <bits/stdc++.h>
using namespace std;
int n;
vector<string> ans;
int test(string s){
	int cnt=0;
	for(char c:s){
		if(c=='6') cnt++;
		else cnt=0;
		if(cnt>3) return 0;
	}
	return 1;
}
void solve(int len,string s){
	if(len==n){
		int check=1;
		for(int i=1;i<s.length();i++){
			if(s[i]=='8' && s[i-1]=='8') check=0;
		} 
		if(!test(s)) check=0;
		if(s[0]=='8' && s[s.length()-1]=='6' && check) ans.push_back(s);
		return;
	}
	if(len>n) return;
	solve(len+1,s+"8");
	solve(len+1,s+"6");
}
int main(){
	cin>>n;
	solve(0,"");
	sort(ans.begin(),ans.end());
	for(string s:ans) cout<<s<<endl;
}