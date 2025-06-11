#include <iostream>
using namespace std;

int main()
{
  int a = 4, b = 8;

  cout << (a & b) << endl;   // Bitwise AND
  cout << (a | b) << endl;   // Bitwise OR
  cout << (a ^ b) << endl;   // Bitwise XOR
  cout << (4 << 1) << endl;  // Left shift      ans = 4(a) * 2^1(b) = 8
  cout << (10 << 2) << endl; // Left shift    ans = 10(a) * 2^2(b) = 40
  cout << (10 >> 1) << endl; // Right shift   ans = 10(a) / 2^1(b) = 5
  cout << (8 >> 2) << endl;  // Right shift   ans = 8(a) / 2^2(b) = 2
  return 0;
}