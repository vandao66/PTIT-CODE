#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,s,m;
		cin>>n>>s>>m;
		int cnt=0;
		int sum=s*m;
		int ngaymua=s-s/7; //tru di ngay chu nhat
		if(ngaymua*n< sum) cout<<-1<<endl;
		else cout<<ceil(1.0*sum/n)<<endl; // ép qua số thập phân để khi chia không mất số sau dấu phẩy, để làm tròn lên
		                                         
	}
}