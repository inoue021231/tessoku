#include<iostream>
using namespace std;

int main() {
  int N;
  bool ans = false;
  cin >> N;
  int A[N];
  for(int i = 0; i < N; i++) cin >> A[i];

  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      for (int k = 0; k < N; k++) {
        if(A[i] + A[j] + A[k] == 1000 && i != j && j != k && k != i) {
          ans = true;
          break;
        }
      }
    }
  }

  if(ans) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}