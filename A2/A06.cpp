#include<iostream>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  int A[N];
  int S[N+1];
  for(int i = 0; i < N; i++) cin >> A[i];
  S[0] = 0;
  for(int i = 1; i < N+1; i++) {
    S[i] = S[i-1] + A[i-1];
  }

  for(int i = 0; i < Q; i++) {
    int L, R;
    cin >> L >> R;
    cout << S[R] - S[L-1] << endl;
  }

  return 0;
}