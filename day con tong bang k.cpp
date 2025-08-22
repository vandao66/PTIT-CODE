#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<int> a,cur;
int check=0; // kiểm tra có dãy cur thỏa mãn nào ko
void solve(int sum,int j){
	if(sum==k){
		check=1;
		cout<<"[";
		for(int i=0;i<cur.size();i++){
			if(i!=cur.size()-1) cout<<cur[i]<<" ";
			else cout<<cur[i];
		}
		cout<<"] ";
		return;
	}
	if(sum>k) return;
	for(int i=j;i<n;i++){
		cur.push_back(a[i]);// thêm vào dãy hiện tại
		solve(sum+a[i],i+1); //truyền j=i+1 để bắt đầu lấy phần tử mới
		cur.pop_back(); // xóa phần tử vừa thêm
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		a.resize(n); // cấp số lượng phần tử không thì lỗi
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a.begin(),a.end());
		solve(0,0); // cần truyền sum và j lúc đầu không thì lỗi
		if(!check) cout<<-1;
		check=0;
		cout<<endl;
	}
	return 0;
}