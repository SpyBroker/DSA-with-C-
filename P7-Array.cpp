/*
#include <iostream>
using namespace std;

void changeArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    arr[i] = 2 * arr[i];
  }
}

int main()
{
  int arr[] = {1, 2, 3};
  changeArr(arr, 3); // array name is by default a pointer to the first element of the array, so we can pass it directly to the function.

  cout << "In main\n";
  for (int i = 0; i < 3; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
*/

#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
  int start = 0, end = size - 1;
  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int size = 5;
  cout << "Original array:\n";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  reverseArray(arr, size);
  cout << "Reversed array:\n";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}