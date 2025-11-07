#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		stack<string> ss;
		for(int i=0;i<s.length();i++){
			if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
				int a=stoi(ss.top());
				ss.pop();
				int b=stoi(ss.top());
				ss.pop();
				int c=0;
				if(s[i]=='+') c=b+a;
				else if(s[i]=='-') c=b-a;
				else if(s[i]=='*') c=b*a;
				else c=b/a;
				ss.push(to_string(c));	
			}
			else ss.push(string(1,s[i]));
		}
		cout<<ss.top()<<endl;
	}
	return 0;
}