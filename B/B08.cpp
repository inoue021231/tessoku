#include<bits/stdc++.h>
using namespace std;

int main() {
  int X_MAX = 1500, Y_MAX = 1500;
  int N, Q;
  cin >> N;
  vector<vector<int>> S(Y_MAX+1, vector<int>(X_MAX+1,0)), Z(Y_MAX+1, vector<int>(X_MAX+1,0));

  for(int i = 1; i <= N; i++) {
    int x, y;
    cin >> x >> y;
    S[y][x] += 1;
  }

  for(int i = 1; i <= Y_MAX; i++) {
    for(int j = 1; j <= X_MAX; j++) {
      Z[i][j] = Z[i][j-1] + S[i][j];
    }
  }

  for(int j = 1; j <= X_MAX; j++) {
    for(int i = 1; i <= Y_MAX; i++) {
      Z[i][j] = Z[i-1][j] + Z[i][j];
    }
  }

  cin >> Q;

  for(int i = 0; i < Q; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << Z[d][c] + Z[b-1][a-1] - Z[d][a-1] - Z[b-1][c] << endl;
  }


  return 0;
}