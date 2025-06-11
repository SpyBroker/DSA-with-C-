#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int ans = 0;
  vector<int> vec = {1, 4, 2, 4, 2};
  for (int val : vec)
  {
    ans = ans ^ val; // XOR operation
  }
  cout << "Single unique element in the vector is: " << ans << endl;
  return 0;
}