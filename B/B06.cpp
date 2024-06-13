#include<iostream>
using namespace std;

int main() {
  int N, Q;
  cin >> N;
  int A[N];
  for(int i = 0; i < N; i++) cin >> A[i];
  cin >> Q;
  int S[N+1];
  S[0] = 0;
  for(int i = 1; i < N+1; i++) {
    S[i] = S[i-1] + A[i-1];
  }

  for(int i = 0; i < Q; i++) {
    int L, R;
    cin >> L >> R;
    int win_count = S[R] - S[L-1];
    double date_count = ((R - L + 1) / 2.0);
    if(win_count == date_count) {
      cout << "draw" << endl;
    } else if(win_count > date_count) {
      cout << "win" << endl;
    } else {
      cout << "lose" << endl;
    }
  }

  return 0;
}