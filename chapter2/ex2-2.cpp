#include <iostream>
#include <cmath>

int main() {
  using std::cout;
  for (int line = 4; line >= 4; --line) {
    if (!line)
      continue;
    for (int space = abs(line); space > 1; --space)
      cout << ' ';
    for (int hash = 10 - abs(line) * 2; hash > 0; --hash)
      cout << '#';
    cout << '\n';
  }
  return 0;
}
