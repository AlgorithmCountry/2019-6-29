#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int N=1001;
int v[N],w[N];
int f[N];
int n,m;
/*
f[i][j]=max(f[i-1][j],f[i][j-v]+w)
f[i][j]=    max(f[i-1][j],f[i-1][j-v]+w,    f[i-1][j-v*2]+w*2,бн) 
f[i][j-v]=  max(          f[i-1][j-v],      f[i-1][j-v*2]+w,              f[i-1][j-v*3]+v*2, бн) 
*/ 
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>v[i]>>w[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=v[i];j<=m;j++){
			f[j]=max(f[j],f[j-v[i]]+w[i]);
		}
	}
	cout<<f[m];
	return 0;
}
