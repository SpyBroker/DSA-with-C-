#include <iostream>
#include <vector>
using namespace std;

// Binary Exponentiation
//  Time complexity: O(log n)
//  calculates x^n using binary exponentiation

/*
int main()
{
  int x, n;
  int ans = 1;
  cout << "Enter base (x): ";
  cin >> x;
  cout << "Enter exponent (n): ";
  cin >> n;
  int a = x;

  long binForm = n;
  if (n < 0)
  {
    x = 1 / x;
    binForm = -binForm;
  }

  while (binForm > 0)
  {
    if (binForm % 2 == 1)
    {
      ans *= x;
    }
    x = x * x;
    binForm /= 2;
  }
  cout << "Result of " << a << "^" << n << " is: " << ans << endl;
  return 0;
}
  */

// Buy and Sell Stock
// Time complexity: O(n)

int main()
{
  vector<int> prices = {7, 1, 5, 3, 6, 4};
  int maxProfit = 0;
  int bestBuy = prices[0];
  for (int i = 1; i < prices.size(); i++)
  {
    if (prices[i] > bestBuy)
    {
      maxProfit = max(maxProfit, prices[i] - bestBuy);
    }
    bestBuy = min(bestBuy, prices[i]);
  }
  cout << "Maximum profit from buying and selling stock is: " << maxProfit << endl;
  return 0;
}