#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
#define all(v) v.begin(), v.end()
#define rep(i,n) for (ll i=0; i<(n); i++)

ll search(const vll& A, ll x) {
  auto it = lower_bound(all(A), x);
  return distance(A.begin(), it);
}

int main() {
  ios::sync_with_stdio(false); // 入出力を高速化
  cin.tie(nullptr); // cinとcoutの同期を解除

  ll N, Q;
  cin >> N;

  vll A(N);
  rep(i, N) cin >> A[i];

  cin >> Q;

  vll X(Q);
  rep(i, Q) cin >> X[i];

  sort(all(A));

  rep(i, Q) {
    cout << search(A, X[i]) << endl;
  } 
  
  return 0;
}