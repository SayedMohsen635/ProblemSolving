#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int n, st, teams;
  std::vector<int> prog, maths, pe;

  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> st;
    if (st == 1) {
      prog.push_back(i + 1);
    } else if (st == 2) {
      maths.push_back(i + 1);
    } else if (st == 3) {
      pe.push_back(i + 1);
    }
  }

  teams = std::min(prog.size(), std::min(maths.size(), pe.size()));
  std::cout << teams << '\n';

  for (int i = 0; i < teams; i++) {
    std::cout << prog[i] << " " << maths[i] << " " << pe[i] << '\n';
  }
  return 0;
}