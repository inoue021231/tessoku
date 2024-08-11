#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool is_correct(vector<ll> A, ll n, ll K) {
  ll sum = 0;
  for(ll i = 0; i < A.size(); i++) {
    sum += n / A[i];
  }
  if(sum >= K) {
    return true;
  } else {
    return false;
  }
}

int main() {
  ll N, K;
  cin >> N >> K;
  vector<ll> A(N);
  for(ll i = 0; i < N; i++) cin >> A[i];

  ll left = 1;
  ll right = pow(10, 9);

  while(left < right) {
    ll mid = (left + right) / 2;
    if(!is_correct(A, mid, K)) left = mid + 1;
    if(is_correct(A, mid, K)) right = mid;
  }

  cout << left << endl;

  return 0;
}