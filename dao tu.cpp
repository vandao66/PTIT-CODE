#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stack<string> ss;	
		string tmp="";
		for(int i=0;i<s.length();i++){
			if(s[i]!=' '){
				tmp+=s[i];
			}
			else{
				ss.push(tmp);
				ss.push(" ");
				tmp="";
			}
		}
		ss.push(tmp);
		while(!ss.empty()){
			cout<<ss.top();
			ss.pop();
		}
		cout<<endl;
	}
}