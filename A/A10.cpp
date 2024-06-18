#include<bits/stdc++.h>
using namespace std;

int main() {
  int N, D;
  cin >> N;
  vector<int> A(N+1), P(N+1,0), Q(N+1,0);
  for(int i = 1; i <= N; i++) cin >> A[i];
  cin >> D;

  P[0] = A[0];
  Q[N] = A[N];

  for(int i = 1; i <= N; i++) {
    P[i] = max(A[i],P[i-1]);
  }

  for(int i = N; i >= 0; i--) {
    Q[i] = max(A[i],Q[i+1]);
  }
  
  for(int i = 0; i < D; i++) {
    int l, r;
    cin >> l >> r;
    cout << max(P[l-1], Q[r+1]) << endl;
  }

  return 0;
}