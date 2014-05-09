#include <iostream>
#include <cmath>

using std::cout;

void print(char ch, int times) {
  for (;times > 0; --times)
    cout << ch;
}

int main() {
  for (int line = 4; line >= -4; --line) {
    if (!line) continue;
    print(' ', 4 - abs(line));
    print('#', 5 - abs(line));
    print(' ', (abs(line) - 1) * 4);
    print('#', 5 - abs(line));
    cout << '\n';
  }
  return 0;
}
