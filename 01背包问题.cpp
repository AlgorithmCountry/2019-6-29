#include<iostream>
#include<algorithm>
using namespace std;
const int N=1001;
int n,m;//n表示物品个数，m表示背包容量
int v[N],w[N];
int f[N][N];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>v[i]>>w[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<=m;j++){
			f[i][j]=f[i-1][j];
			if(j>=v[i]){
				f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
			}
		
		}
	}
	cout<<f[n][m]<<endl;
	return 0;
}
