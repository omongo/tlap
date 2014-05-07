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
  int odd_checksum = 0;
  int even_checksum = 0;
  int position = 1;
  cout << "Enter a number: ";
  for (char digit = cin.get(); digit != 10; ++position) {
    digit -= '0';
    if (position % 2 == 0) {
      even_checksum += digit;
      odd_checksum += double_value(digit);
    } else {
      even_checksum += double_value(digit);
      odd_checksum += digit;
    }
    digit = cin.get();
  }
  int checksum = (position - 1) % 2 == 0 ? even_checksum : odd_checksum;
  cout << "Checksum is " << checksum << ".\n";
  if (checksum % 10 == 0)
    cout << "Checksum is divisible by 10, Valid.\n";
  else
    cout << "Checksum is not divisible by 10, Invalid.\n";
  return 0;
}
