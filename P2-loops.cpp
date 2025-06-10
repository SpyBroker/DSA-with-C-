#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  if (n >= 0)
  {
    cout << "positive" << endl;
  }
  else
  {
    cout << "negative" << endl;
  }

  int a = 45;

  cout << (a >= 0 ? "Positive" : "Negative") << endl; // ternary operator

  // while loop

  int count = 1;
  while (count <= 5)
  {
    cout << count << " ";
    count++;
  }
  cout << endl;

  // for loop

  for (int i = 0; i <= 5; i++)
  {
    cout << i << " ";
  }
  cout << endl;

  // do-while loop

  count = 0;
  do
  {
    cout << count << " ";
    count++;
  } while (count <= 5);
  cout << endl;

  return 0;
}