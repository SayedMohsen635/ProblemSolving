#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  std::vector<int> stewards(n);

  for (int i = 0; i < n; i++) {
    std::cin >> stewards[i];
  }

  std::sort(stewards.begin(), stewards.end());

  int counter = 0;
  int minValue = stewards[0];
  int maxValue = stewards[n - 1];
  for (int i = 1; i < n - 1; i++) {
    if (stewards[i] > minValue && stewards[i] < maxValue) {
      counter++;
    }
  }

  std::cout << counter;
  return 0;
}