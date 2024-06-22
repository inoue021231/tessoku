#include<bits/stdc++.h>
using namespace std;

int main() {
  int H, W, N;
  cin >> H >> W >> N;

  vector<vector<int>> S(H+2, vector<int>(W+2, 0)), Z(H+2, vector<int>(W+2,0)); 
  vector<int> A(N), B(N), C(N), D(N);

  for(int i = 0; i < N; i++) cin >> A[i] >> B[i] >> C[i] >> D[i];

  for(int i = 0; i < N; i++) {
    S[A[i]][B[i]] += 1;
    S[A[i]][D[i]+1] -=1;
    S[C[i]+1][B[i]] -= 1;
    S[C[i]+1][D[i]+1] += 1;
  }

  for(int i = 1; i <= H; i++) {
    for(int j = 1; j <= W; j++) {
      Z[i][j] = Z[i][j-1] + S[i][j];
    }
  }

  for(int j = 1; j <= W; j++) {
    for(int i = 1; i <= H; i++) {
      Z[i][j] = Z[i-1][j] + Z[i][j];
    }
  }

  for(int i = 1; i <= H; i++) {
    for(int j = 1; j <= W; j++) {
      cout << Z[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}