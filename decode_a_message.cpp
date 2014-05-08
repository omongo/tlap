#include <iostream>

int main() {
  using std::cout;
  using std::cin;
  char output_char;
  enum mode_t {UPPERCASE, LOWERCASE, PUNCTUATION};
  mode_t mode = UPPERCASE;
  char digit_char;
  do {
    digit_char = cin.get();
    int number = digit_char - '0';
    digit_char = cin.get();
    while (digit_char != 10 && digit_char != ',') {
      number = number * 10 + (digit_char - '0');
      digit_char = cin.get();
    }
    switch (mode) {
      case UPPERCASE:
        number %= 27;
        output_char = number + 'A' - 1;
        if (number == 0) {
          mode = LOWERCASE;
          continue;
        }
        break;
      case LOWERCASE:
        number %= 27;
        output_char = number + 'a' - 1;
        if (number == 0) {
          mode = PUNCTUATION;
          continue;
        }
        break;
      case PUNCTUATION:
        number %= 9;
        switch (number) {
          case 1: output_char = '!'; break;
          case 2: output_char = '?'; break;
          case 3: output_char = ','; break;
          case 4: output_char = '.'; break;
          case 5: output_char = ' '; break;
          case 6: output_char = ';'; break;
          case 7: output_char = '"'; break;
          case 8: output_char = '\''; break;
        }
        if (number == 0) {
          mode = UPPERCASE;
          continue;
        }
        break;
    }
    cout << output_char;
  } while (digit_char != 10);
  cout << '\n';
  return 0;
}
