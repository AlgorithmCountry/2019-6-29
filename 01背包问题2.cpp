//优化
#include<iostream>
#include<algorithm>
using namespace std;
const int N=1001;
int n,m;//n表示物品个数，m表示背包容量
int v[N],w[N];
int f[N];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>v[i]>>w[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=m;j>=v[i];j--){
			f[j]=max(f[j],f[j-v[i]]+w[i]);
			//f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
		}
	}
	cout<<f[m]<<endl;
	return 0;
}
