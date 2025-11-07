#include <bits/stdc++.h>
using namespace std;
string solve(string s){
	stack<char> ss;
	for(int i=0;i<s.length();i++){
		if(s[i]==')'){
			if(ss.empty() || ss.top()!='(') return "NO";
			else ss.pop();
		}
		else if(s[i]==']'){
			if(ss.empty() || ss.top()!='[') return "NO";
			else ss.pop();
		}
		else if(s[i]=='}'){
			if(ss.empty() || ss.top()!='{') return "NO";
			else ss.pop();
		}
		else ss.push(s[i]);
	}
	return ss.empty() ? "YES" : "NO";
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		cout<<solve(s)<<endl;
	}
}