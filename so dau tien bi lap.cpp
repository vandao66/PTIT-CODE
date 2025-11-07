#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		map<int,int> a;
		vector<int> order;
		for(int i=0;i<n;i++){
			int x;cin>>x;
			if(a[x]==0) order.push_back(x); // lưu thứ tự các phần tử ban đầu
			a[x]++; // thêm vào map để đếm tần suất
		}
		int check=0;
		for(int x:order){
			if(a[x]>1){ // trong map mà tần suất bằng 2 thì in theo thứ tự trong vector order đã lưu
				cout<<x<<endl;
				check=1;
				break;
			}
		}
		if(!check) cout<<"NO"<<endl;
	}
}