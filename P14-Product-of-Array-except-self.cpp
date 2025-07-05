#include <iostream>
#include <vector>
using namespace std;

// Optimized solution using prefix and suffix products but space complexity-O(n)
/*
int main()
{
  vector<int> nums = {1, 2, 3, 4};
  int n = nums.size();
  vector<int> ans(n, 1);
  vector<int> prefix(n, 1);
  vector<int> suffix(n, 1);

  // prefix
  for (int i = 1; i < n; i++)
  {
    prefix[i] = prefix[i - 1] * nums[i - 1];
  }

  // suffix
  for (int i = n - 2; i >= 0; i--)
  {
    suffix[i] = suffix[i + 1] * nums[i + 1];
  }

  // answer
  for (int i = 0; i < n; i++)
  {
    ans[i] = prefix[i] * suffix[i];
  }

  cout << "The product of array except self is: ";
  for (int val : ans)
  {
    cout << val << " ";
  }
  cout << endl;
  return 0;
}
  */

// Optimized solution using prefix and suffix products but space complexity-O(1)

int main()
{
  vector<int> nums = {1, 2, 3, 4};
  int n = nums.size();
  vector<int> ans(n, 1);

  // prefix => ans
  for (int i = 1; i < n; i++)
  {
    ans[i] = ans[i - 1] * nums[i - 1];
  }

  // suffix => ans
  int suffix = 1;
  for (int i = n - 2; i >= 0; i--)
  {
    suffix *= nums[i + 1];
    ans[i] *= suffix;
  }

  cout << "The product of array except self is: ";
  for (int val : ans)
  {
    cout << val << " ";
  }
  cout << endl;
  return 0;
}