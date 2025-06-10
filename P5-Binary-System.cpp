#include <iostream>
using namespace std;

// Decimal to Binary conversion
/*
int decimalToBinary(int decimal)
{
  int ans = 0, pow = 1;
  while (decimal > 0)
  {
    int rem = decimal % 2;
    decimal = decimal / 2;
    ans += rem * pow;
    pow = pow * 10;
  }
  return ans;
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  cout << "Coverting decimal to binary: \n";
  int binary = decimalToBinary(n);
  cout << binary << endl;

  return 0;
}
  */

// Binary to Decimal conversion

int binaryToDecimal(int binary)
{
  int ans = 0, pow = 1;
  while (binary > 0)
  {
    int rem = binary % 10;
    binary = binary / 10;
    ans += rem * pow;
    pow = pow * 2;
  }

  return ans;
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  cout << "Coverting binary to decimal: \n";
  int decimal = binaryToDecimal(n);
  cout << decimal << endl;
}