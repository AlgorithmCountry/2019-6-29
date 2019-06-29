#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

const int N=1001;
int v[N],w[N],s[N];
int f[N][N];
int n,m;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>v[i]>>w[i] >> s[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<=m;j++){
			for(int k=0;v[i]*k<=j&&k <=s[i];k++){
				f[i][j]=max(f[i][j],f[i-1][j-v[i]*k]+w[i]*k);
			}
		}
	}
	cout<<f[n][m];
	return 0;
}
