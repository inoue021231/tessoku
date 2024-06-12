#include<iostream>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  int A[100];
  bool flag = true;
  for(int i = 0; i < N; i++) cin >> A[i];
  for(int i = 0; i < N; i++) {
    if(A[i] == X) {
      cout << "Yes" << endl;
      flag = false;
      break;
    }
  }
  if(flag) {
    cout << "No" << endl;
  }

  return 0;
}