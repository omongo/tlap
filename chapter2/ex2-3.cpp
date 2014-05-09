#include <iostream>
#include <cmath>

int main() {
  using std::cout;
  using std::cin;
  for (int line = 4; line >= -4; --line) {
    if (!line)
      continue;
    for (int space = 4 - abs(line); space > 0; --space)
      cout << ' ';
    for (int hash = 5 - abs(line); hash > 0; --hash)
      cout << '#';
    for (int space = (abs(line) - 1) * 4; space > 0; --space)
      cout << ' ';
    for (int hash = 5 - abs(line); hash > 0; --hash)
      cout << '#';
    cout << '\n';
  }
  return 0;
}
