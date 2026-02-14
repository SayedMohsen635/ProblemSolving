#include <iostream>

int main() {
  int n, k;
  std::cin >> n >> k;
  char result;
  for (int i = 0; i < n; i++) {
    result = 'a' + i % k;
    std::cout << result;
  }
  return 0;
}