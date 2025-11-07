#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		stack<string> ss;
		int n=s.length()-1;
		for(int i=n;i>=0;i--){
			if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
				string a=ss.top();
				ss.pop();
				string b=ss.top();
				ss.pop();
				string c="("+a+s[i]+b+")";
				ss.push(c);
			}
			else ss.push(string(1,s[i]));
		}
		cout<<ss.top()<<endl;
	}
}