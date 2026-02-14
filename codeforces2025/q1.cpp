#include <iostream>

using namespace std;

void solve() {
  string s;
  cin >> s;
  int counter = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'Y') {
      counter++;
    }
  }

  if (counter <= 1) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}