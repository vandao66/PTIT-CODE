#include <bits/stdc++.h>
using namespace std;
int tong;
vector<string> snt;
char ans[5][5];
unordered_set<string> tiento;
int checksnt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
void sinhsnt(){
	for(int i=10000;i<=99999;i++){
		if(!checksnt(i)) continue;
		int sum=0;
		string s=to_string(i);
		for(char c: s) sum+=c-'0';
		if(sum==tong){
			snt.push_back(s);
			for(int i=1;i<=s.length();i++){
				tiento.insert(s.substr(0,i));
			}
		}
	}
}
int checksntvasum(string s){
	int num=stoi(s),sum=0;
	for(char c:s) sum+=c-'0';
	return checksnt(num) && sum==tong;
}
void quaylui(int hang){
	if(hang==5){
		string c1,c2;
		for(int i=0;i<5;i++){
			c1+=ans[i][i];
			c2+=ans[i][4-i];
		}
		if(!checksntvasum(c1) || !checksntvasum(c2)) return; 
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++) cout<<ans[i][j]<<" ";
				cout<<endl;
		}
		exit(0);
	}
	for(auto &p: snt){
		int check=1;
		for(int j=0;j<5;j++){
			string checktiento;
			for(int i=0;i<hang;i++){
				checktiento+=ans[i][j];
			}
			checktiento+=p[j];
			if(!tiento.count(checktiento)){
				check=0;
				break;
			}
		}
		if(check){
			for(int i=0;i<5;i++) ans[hang][i]=p[i];
			quaylui(hang+1);
		}
	}
}
int main(){
	cin>>tong;
	sinhsnt();
	quaylui(0);
}