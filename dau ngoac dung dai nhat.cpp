#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;cin>>s;
		if(s==""){
			cout<<"0"<<endl;
			continue;
		}
		stack<char> ss;
		int cnt=0;
		int maxx=0;
		for(int i=0;i<s.length();i++){
			int check=0;
			if(s[i]==')'){
				int a=cnt;
				if(!ss.empty() && ss.top()=='('){
					ss.pop();
					cnt+=2;
					check=1;
				}
				int b=cnt;
				if(b>a) maxx=max(b,maxx);
				else cnt=0;
			}
			if(!check) ss.push(s[i]);
		}
		cout<<maxx<<endl;
	}
	return 0;
}