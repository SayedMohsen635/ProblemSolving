#include <algorithm>
#include <iostream>

int main() {
  std::string a, b;
  std::cin >> a >> b;

  if (a == b) {
    std::cout << -1 << '\n';
  } else {
    std::cout << std::max(a.length(), b.length()) << '\n';
  }
  return 0;
}