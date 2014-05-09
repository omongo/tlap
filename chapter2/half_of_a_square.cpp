#include <iostream>

int main() {
  for (int row = 5; row > 0; --row) {
    for (int column = row; column > 0; --column)
      std::cout << '#';
    std::cout << '\n';
  }
  return 0;
}
