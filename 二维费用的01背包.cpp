#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1010, M = 110;

int n, V, T; // n表示物品个数, m表示背包容量
int v[N], w[N], t[N];
int f[M][M];


int main()
{
    cin >> n >> V >> T;
    for (int i = 1; i <= n; i ++ ) cin >> v[i] >> t[i] >> w[i];
    
    for (int i = 1; i <= n; i ++ )
        for (int j = V; j >= v[i]; j -- )
            for (int k = T; k >= t[i]; k -- )
                f[j][k] = max(f[j][k], f[j - v[i]][k - t[i]] + w[i]);
    
    cout << f[V][T] << endl;
    
    return 0;
}