#include<iostream>
#include<cmath>
using namespace std;

int main() {
  int N, ans = 0;
  cin >> N;
  for(int i = 0; i < 8; i++) {
    int num1 = pow(10, i);
    int num2 = pow(2, i);
    ans += (N / num1) % 10 * num2;
  }
  cout << ans << endl;
  return 0;
}