#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<int> v(n);
  std::vector<int> result(n);

  for (int i = 0; i < n; i++) {
    std::cin >> v[i];
    result[v[i] - 1] = i + 1;
  }

  for (int i = 0; i < n; i++) {
    std::cout << result[i] << " ";
  }
  return 0;
}