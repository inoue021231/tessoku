#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll search(vector<ll> A, ll x) {
  ll L = 0, R = A.size() - 1;
  while(L <= R) {
    ll M = (L + R) / 2;
    if(A[M] > x) R = M - 1;
    if(A[M] == x) return M + 1;
    if(A[M] < x) L = M + 1; 
  }
  return -1;
}

int main() {
  ll N, X;
  cin >> N >> X;
  vector<ll> A(N);
  for(ll i = 0; i < N; i++) cin >> A[i];

  cout << search(A, X) << endl;

  return 0;
}