#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*

// Brute force approach
// Time complexity: O(n^2)

vector<int> pairSum(vector<int> nums, int target)
{
  vector<int> ans;
  int n = nums.size();

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (nums[i] + nums[j] == target)
      {
        ans.push_back(nums[i]);
        ans.push_back(nums[j]);
        return ans;
      }
    }
  }
}

int main()
{
  vector<int> nums = {2, 7, 11, 15};
  int target = 13;

  vector<int> ans = pairSum(nums, target);
  cout << "Pair with sum " << target << " is: ";
  cout << ans[0] << "," << ans[1] << endl;
  return 0;
}
  */

// array already sorted
// Two pointer approach
// Time complexity: O(n)

/*

int main()
{
  vector<int> nums = {2, 7, 11, 15};
  int target = 13;
  int i = 0, j = nums.size() - 1;
  while (i < j)
  {
    int pairSum = nums[i] + nums[j];
    if (pairSum < target)
      i++;
    else if (pairSum > target)
      j--;
    else
    {
      cout << "Pair with sum " << target << " is: ";
      cout << nums[i] << "," << nums[j] << endl;
      cout << "Pair position is: (" << i << "," << j << ")" << endl;
      return 0;
    }
  }
}

*/

// Majority Element, Brute Force Approach
// Time complexity: O(n^2)

/*
int main()
{
  vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
  int n = nums.size();
  for (int val : nums)
  {
    int freq = 0;
    for (int el : nums)
    {
      if (el == val)
      {
        freq++;
      }
    }
    if (freq > n / 2)
    {
      cout << "Majority Element is: " << val << endl;
      break;
    }
  }
  return 0;
}

*/

// Majority Element, Optimized Approach, sorted array
// Time complexity: O(n log n) for sorting, O(n) for finding majority element

/*
int main()
{
  vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
  int n = nums.size();
  sort(nums.begin(), nums.end());
  int freq = 1, ans = nums[0];
  for (int i = 1; i < n; i++)
  {
    if (nums[i] == nums[i - 1])
    {
      freq++;
    }
    else
    {
      freq = 1;
      ans = nums[i];
    }
    if (freq > n / 2)
    {
      break;
    }
  }
  cout << "Majority Element is: " << ans << endl;

  return 0;
}
*/

// Moore's Voting Algorithm
//  Time complexity: O(n)

int main()
{
  vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
  int n = nums.size();
  int freq = 0, ans = 0;
  for (int i = 0; i < n; i++)
  {
    if (freq == 0)
    {
      ans = nums[i];
    }
    if (ans == nums[i])
    {
      freq++;
    }
    else
    {
      freq--;
    }
  }

  cout << "Majority Element is: " << ans << endl;

  return 0;
}