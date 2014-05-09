#include <iostream>

int main() {
  using std::cout;
  for (int line = 0; line < 4; ++line) {
    for (int space = line; space > 0; --space)
      cout << ' ';
    for (int hash = 8 - line * 2; hash >= 1; --hash)
      cout << '#';
    cout << '\n';
  }
  return 0;
}
