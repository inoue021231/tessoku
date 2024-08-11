#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  double left = 1;
  double right = 100;

  while (right - left > 0.001) {
    double mid = (left + right) / 2.0;
    double fn = mid * mid * mid + mid;

    if (fn > 1.0 * N) {
      right = mid;
    } else {
      left = mid;
    }
  }

  cout << fixed << setprecision(10) << left << endl;
  return 0;
}