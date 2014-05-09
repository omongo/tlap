#include <iostream>

inline int double_value(int digit)
{
  digit *= 2;
  return (digit > 10 ? 1 : 0) + digit % 10;
}

int main()
{
  using std::cout;
  using std::cin;
  int odd_sum = 0, even_sum = 0, pos = 0;
  cout << "Enter a number: ";
  for (char digit = cin.get(); digit != 10; ++pos) {
    digit -= '0';
    if (pos % 2 == 0) {
      even_sum += digit;
      odd_sum += double_value(digit);
    } else {
      even_sum += double_value(digit);
      odd_sum += digit;
    }
    digit = cin.get();
  }
  int checksum = (pos - 1) % 2 == 0 ? even_sum : odd_sum;
  cout << "Checksum is " << checksum << ".\n";
  if (checksum % 10 == 0)
    cout << "Checksum is divisible by 10, Valid.\n";
  else
    cout << "Checksum is not divisible by 10, Invalid.\n";
  return 0;
}
