//�Ż�
#include<iostream>
#include<algorithm>
using namespace std;
const int N=1001;
int n,m;//n��ʾ��Ʒ������m��ʾ��������
int v[N],w[N];
int f[N][N];
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
	cout<<f[n][m]<<endl;
	return 0;
}
