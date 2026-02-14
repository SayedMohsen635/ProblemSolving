#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;
  std::vector<int> freq(n + 1);

  int current = n;
  for (int i = 0; i < n; i++) {
    int num;
    std::cin >> num;

    freq[num] = 1;
    while (freq[current] == 1) {
      std::cout << current << ' ';
      current--;
    }

    std::cout << '\n';
  }

  return 0;
}