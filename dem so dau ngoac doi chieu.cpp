#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<char> ss;
		for(int i=0;i<s.length();i++){
			int check=0;
			if(s[i]==')'){
				if(!ss.empty() && ss.top()=='('){
					ss.pop();
					check=1;
				}
			}
		    if(!check) ss.push(s[i]); 
		}
		int n=0,m=0;
		while(!ss.empty()){
			if(ss.top()=='('){
				n++;
				ss.pop();
			}
			else{
				m++;
				ss.pop();
			}
		}
		int ans=((n+1)/2) + ((m+1)/2);
		cout<<ans<<endl;	
	}
	return 0;
}