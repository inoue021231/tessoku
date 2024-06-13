#include<iostream>
using namespace std;

int main() {
  int T, N;
  cin >> T >> N;
  int S[T + 1];
  for(int i = 0; i < T + 1; i++) S[i] = 0;

  for(int i = 0; i < N; i++) {
    int L, R;
    cin >> L >> R;
    S[L] += 1;
    S[R] -= 1;
  }

  int ans[T + 1];
  ans[0] = 0;

  for(int i = 1; i < T + 1; i++) {
    ans[i] = ans[i-1] + S[i-1];
    cout << ans[i] << endl;
  }

  return 0;
}