#include <bits/stdc++.h>
using namespace std;
string solve(string s){
	stack<char> ss;
	for(int i=0;i<s.length();i++){
		if(s[i]==')'){	
			int check=0;
			while(ss.top()!='('){
				if(ss.top()=='+' || ss.top()=='-'|| ss.top()=='*' || ss.top()=='/') check=1;
				ss.pop();
			}
			ss.pop();
			if(check==0) return "Yes";
			else ss.push('x'); // coi nhu m?t 1 toán h?ng
		}
		else ss.push(s[i]);
	}
	return "No";
}
int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		cout<<solve(s)<<endl;
	}
}