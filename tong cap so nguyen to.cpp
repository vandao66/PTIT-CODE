#include <bits/stdc++.h>
using namespace std;
vector<int> f(10000000);
void snt(){
	f[0]=0;f[1]=0;
	for(int i=2;i<10000000;i++) f[i]=1;
	for(int i=2;i*i<1000000;i++){
		if(f[i]==1){
			for(int j=i*i;j<10000000;j+=i){
				f[j]=0;
			}
		}
	}
}
int main(){
	snt();
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		int check=0;
		for(int i=2;i<=n/2;i++){
			if(f[i] && f[n-i]){
				cout<<i<<" "<<n-i<<endl;
				check=1;
				break;
			}
		}
		if(!check) cout<<-1<<endl;
	}
}