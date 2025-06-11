#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> vec = {1, 2, 3}; // 3 size
  cout << vec[0] << endl;

  vector<int> vec2(5, 0); // 5 size, all elements initialized to 0
  for (int i = 0; i < vec2.size(); i++)
  {
    cout << vec2[i] << " "; // prints 0 0 0 0 0
  }
  cout << endl;

  vector<char> vec3 = {'a', 'b', 'c'}; // 3 size
  for (char i : vec3)                  // syntax for for each loop
  {
    cout << i << " "; // prints a b c
  }
  cout << endl;

  vector<int> vec4;

  cout << "Size = " << vec4.size() << endl;                 // prints 0, as vector is empty
  vec4.push_back(25);                                       // adds 1 to the end of the vector
  cout << "After push back size = " << vec4.size() << endl; // prints 1, as vector now has 1 element
  cout << vec4[0] << endl;                                  // prints 25
  vec4.push_back(35);
  vec4.push_back(45);
  vec4.push_back(55);
  for (int val : vec4)
  {
    cout << val << " "; // prints 25 35 45 55
  }
  cout << endl;

  // push means adding an element to the end of the vector
  // pop means removing the last element of the vector

  vec4.pop_back(); // removes the last element (55)
  cout << "After pop back size = " << vec4.size() << endl;
  for (int val : vec4)
  {
    cout << val << " "; // prints 25 35 45
  }
  cout << endl;

  cout << vec4.front() << endl;                 // prints 25, the first element of the vector
  cout << vec4.back() << endl;                  // prints 45, the last element of the vector
  cout << "At index 1: " << vec4.at(1) << endl; // prints the value at index 1, which is 35
  cout << vec4[1] << endl;                      // also prints the value at index 1, which is 35

  vector<int> vec5;

  vec5.push_back(0);
  vec5.push_back(1);
  vec5.push_back(2);

  cout << vec5.size() << endl;     // prints 3, as there are 3 elements in vec5
  cout << vec5.capacity() << endl; // prints 4, as the capacity of the vector multiplies by 2 when the size exceeds the current capacity

  vec5.push_back(3);
  vec5.push_back(4);

  cout << "how the capacity increases when we add more elements:" << endl;

  cout << vec5.size() << endl;     // prints 5, as there are 3 elements in vec5
  cout << vec5.capacity() << endl; // prints 8, as the capacity of the vector multiplies by 2 when the size exceeds the current capacity

  return 0;
}