// Maximum Subarray Sum
// Number of subarrays: n*(n+1)/2

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n = 7;
  int arr[] = {3, -4, 5, 4, -1, 7, -8};

  cout << "All subarrays of the array are:" << endl; // Print all subarrays

  for (int st = 0; st < n; st++)
  {
    for (int end = st; end < n; end++)
    {
      for (int i = st; i <= end; i++)
      {
        cout << arr[i];
      }
      cout << " ";
    }
    cout << endl;
  }

  // Brute Force Solution
  cout << "Brute Force Solution:" << endl;

  int maxSum = 0;
  for (int st = 0; st < n; st++)
  {
    int currentSum = 0; // Initialize current sum for each starting point
    for (int end = st; end < n; end++)
    {
      currentSum += arr[end];           // Add the current element to the current sum
      maxSum = max(maxSum, currentSum); // Update maxSum if currentSum is greater
    }
  }

  cout << "Maximum subarray sum is: " << maxSum << endl;

  // Kadane's Algorithm
  cout << "Kadane's Algorithm Solution:" << endl;
  int sMax = 0, currSum = 0;
  for (int st = 0; st < n; st++)
  {
    currSum += arr[st];
    sMax = max(sMax, currSum); // done before reseting currSum cause if all the elements are negative, we will atleast get one maximum value
    if (currSum < 0)
      currSum = 0; // Reset current sum if it becomes negative
  }

  cout << "Maximum subarray sum is: " << sMax << endl;

  return 0;
}