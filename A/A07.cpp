#include<iostream>
using namespace std;

int main() {
  int D, N;
  cin >> D >> N;
  int S[D+1];
  for(int i = 0; i <= D; i++) {
    S[i] = 0;
  }

  for(int i = 0; i < N; i++) {
    int L, R;
    cin >> L >> R;
    S[L-1] += 1;
    S[R] -= 1;
  }

  int ans[D+2];
  ans[0] = 0;

  for(int i = 1; i < D+1; i++) {
    ans[i] = ans[i-1] + S[i-1];
    cout << ans[i] << endl;
  }

  return 0;
}