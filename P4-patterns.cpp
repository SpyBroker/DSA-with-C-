#include <iostream>
using namespace std;

int main()
{
  int n, i, j;
  cout << "Enter a number: ";
  cin >> n;
  /* int c = 1;
   for (int i = 1; i <= n; i++)
   {
     for (int j = 1; j <= n; j++)
     {
       cout << c << " ";
       c++;
     }
     cout << endl;
   } */

  /* for (i = 0; i < n; i++)
  {
    for (j = 0; j < i + 1; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
*/

  /* for (i = 0; i < n; i++)
  {
    for (j = 0; j < i + 1; j++)
    {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
    */

  /* for (i = 1; i <= n; i++)
  {
    for (j = i; j >= 1; j--)
    {
      cout << j << " ";
    }
    cout << endl;
  }
*/
  /* int c = 1;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < i + 1; j++)
    {
      cout << c << " ";
      c++;
    }
    cout << endl;
  }
    */

  /* for (i = 1; i <= n; i++)
  {
    for (j = 1; j < i; j++)
    {
      cout << "  ";
    }
    for (j = n; j >= i; j--)
    {
      cout << i << " ";
    }
    cout << endl;
  }
    */

  /*
for (i = 1; i <= n; i++)
{
  for (j = n; j > i; j--)
  {
    cout << "  ";
  }
  for (j = 1; j <= i; j++)
  {
    cout << j << " ";
  }
  for (j = 1; j < i; j++)
  {
    cout << j << " ";
  }
  cout << endl;
}
  */

  // hollow diamond pattern

  // top
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      cout << "  ";
    }
    cout << "*";
    if (i != 0)
    {
      for (j = 0; j < 2 * i - 1; j++)
      {
        cout << "  ";
      }
      cout << " *";
    }

    cout << endl;
  }

  // bottom
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < i + 1; j++)
    {
      cout << "  ";
    }
    cout << "*";
    if (i != n - 2)
    {
      for (j = 0; j < 2 * (n - i) - 5; j++)
      {
        cout << "  ";
      }
      cout << " *";
    }
    cout << endl;
  }

  return 0;
}