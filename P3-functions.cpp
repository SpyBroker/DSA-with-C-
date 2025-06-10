#include <iostream>
using namespace std;

void printHello()
{
  cout << "Hello, World!" << endl;
}

int min(int a, int b)
{
  return (a < b) ? a : b;
}

int main()
{
  printHello();
  printHello();

  cout << "Minimum of 5 and 10 is: " << min(5, 10) << endl;

  return 0;
}