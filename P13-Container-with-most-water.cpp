#include <iostream>
#include <vector>
using namespace std;

// Brute force solution
/*
int main()
{
  vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  int vol = 0;
  int j = height.size() - 1;
  while (j >= 1)
  {
    for (int i = 0; i < j; i++)
    {
      int ht = min(height[i], height[j]);
      int testVol = (j - i) * ht;
      vol = max(vol, testVol);
    }
    j--;
  }
  cout << "Max volume: " << vol << endl;
  return 0;
}
  */

// Optimized solution using two pointers approach
int main()
{
  vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  int i = 0;
  int j = height.size() - 1;
  int vol = 0;
  for (int k = 0; k < height.size(); k++)
  {
    int ht = min(height[i], height[j]);
    int testVol = (j - i) * ht;
    vol = max(vol, testVol);
    height[i] < height[j] ? i++ : j--;
  }
  cout << "Max volume: " << vol << endl;
  return 0;
}