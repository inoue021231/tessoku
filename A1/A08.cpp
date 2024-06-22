#include<bits/stdc++.h>
using namespace std;

int main() {

  int H, W, Q;
  
  cin >> H >> W;

  vector<vector<int>> X(H+1, vector<int>(W+1)), Z(H+1, vector<int>(W+1));

  for(int i = 1; i <= H; i++) {
    for(int j = 1; j <= W; j++) {
      cin >> X[i][j];
    }
  }

  cin >> Q;

  vector<int> A(Q), B(Q), C(Q), D(Q);

  for(int i = 0; i < Q; i++) {
    cin >> A[i] >> B[i] >> C[i] >> D[i];
  }

  for(int i = 0; i <= H; i++) {
    for(int j = 0; j <= W; j++) {
      Z[i][j] = 0;
    }
  }

  for(int i = 1; i <= H; i++) {
    for(int j = 1; j <= W; j++) {
      Z[i][j] = Z[i][j-1] + X[i][j];
    }
  }

  for(int j = 1; j <= W; j++) {
    for(int i = 1; i <= H; i++) {
      Z[i][j] = Z[i-1][j] + Z[i][j];
    }
  }
  
  for(int i = 0; i < Q; i++) {
    cout << Z[C[i]][D[i]] + Z[A[i] - 1][B[i] - 1] - Z[C[i]][B[i] - 1] - Z[A[i] - 1][D[i]] << endl;
  }

  return 0;
}