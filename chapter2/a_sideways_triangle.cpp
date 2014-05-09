#include <iostream>
#include <cmath>

int main() {
  for (int row = 3; row >= -3; --row) {
    for (int column = 4 - abs(row); column > 0; --column)
      std::cout << '#';
    std::cout << '\n';
  }
  return 0;
}
