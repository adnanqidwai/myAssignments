#include <stdio.h>
const int mod=1e9+7;
int binexp(int n, int m){
    if (m==0)
    {
        return 1;
    }
    int temp = binexp(n,m/2);
    if (m&1==1)
    {
        return (n*((1ll *temp *temp)%mod)%mod);
    }
    else{
        return (1ll* temp* temp)%mod;
    }   
}

int main() {
	int N,M;
	int Q;
	scanf("%d %d",&n,&m);
	// read in the initial trees
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d",)
			forest[i + 1][j + 1] += a == '*';
		}
	}

	// build the prefix sum array
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			tree_pref[i][j] = forest[i][j]
						+ tree_pref[i - 1][j]
						+ tree_pref[i][j - 1]
						- tree_pref[i - 1][j - 1];
		}
	}

	for (int q = 0; q < Q; q++) {
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << tree_pref[x2][y2]
				- tree_pref[x1-1][y2]
				- tree_pref[x2][y1-1]
				+ tree_pref[x1-1][y1-1] << '\n';
	}
}
