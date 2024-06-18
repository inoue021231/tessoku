#include<bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<vector<int>> X(1509, vector<int>(1509,0)), Z(1509, vector<int>(1509,0));
  vector<int> A(N), B(N), C(N), D(N);

  for(int i = 0; i < N; i++) cin >> A[i] >> B[i] >> C[i] >> D[i];

  for(int i = 0; i < N; i++) {
    X[B[i]+1][A[i]+1] += 1;
    X[B[i]+1][C[i]+1] -= 1;
    X[D[i]+1][A[i]+1] -= 1;
    X[D[i]+1][C[i]+1] += 1;
  }

  for(int i = 1; i <= 1500; i++) {
    for(int j = 1; j <= 1500; j++) {
      Z[i][j] = Z[i][j-1] + X[i][j];
    }
  }

  for(int j = 1; j <= 1500; j++) {
    for(int i = 1; i <= 1500; i++) {
      Z[i][j] = Z[i-1][j] + Z[i][j];
    }
  }

  int ans = 0;

  for(int i = 1; i <= 1500; i++) {
    for(int j = 1; j <= 1500; j++) {
      if(Z[i][j] >= 1) {
        ans++;
      }
    }
  }

  cout << ans << endl;

  return 0;
}