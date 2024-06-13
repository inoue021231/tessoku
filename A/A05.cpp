#include<iostream>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  int ans = 0;
  for(int i = 1; i <= N; i++) {
    for(int j = 1; j <= N; j++) {
      int k = K - i - j;
      if(k >= 1 && k <= N) {
        ans++;
      }
    }
  }

  cout << ans << endl;
  return 0;
}