#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  bool freq[26] = {false};

  int length;
  std::cin >> length;

  std::string sentence;
  std::cin >> sentence;
  int count = 0;

  for (char c : sentence) {
    if (std::isalpha(c)) {
      c = std::tolower(c);
      if (!freq[c - 'a']) {
        freq[c - 'a'] = true;
        count++;
      }
    }
    if (count == 26) {
      std::cout << "YES" << '\n';
      return 0;
    }
  }
  std::cout << "NO" << '\n';
  return 0;
}