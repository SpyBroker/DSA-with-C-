#include <iostream>
using namespace std;

int main()
{
  /*
  int age = 25;
  cout << "Age: " << age << endl;
  cout << sizeof(age) << endl; // Output the size of the variable 'age'
  char grade = 'A';
  cout << "Grade: " << grade << endl;
  float pi = 3.14f; // Use 'f' to specify float literal
  cout << "Pi: " << pi << endl;
  bool isSafe = false;
  cout << isSafe << endl; // Output the boolean value (true -> 1 & false -> 0)
  double price = 100.99;
  cout << "Price: " << price << endl;

  // Type casting

  int value = grade;                         // Implicit conversion from char to int
  cout << "Value: " << value << endl;        // Output the ASCII value of 'A'
  int newPrice = (int)price;                 // Explicit conversion from double to int
  cout << "New Price: " << newPrice << endl; // Output the integer part of price
*/

  // Input in C++

  int inputAge;
  cout << "Enter your age: ";
  cin >> inputAge; // Read input from the user

  cout << "Your age is: " << inputAge << endl;

  int a = 5, b = 10;
  cout << "Sum = " << (a + b) << endl;
  cout << "Difference = " << (b - a) << endl;

  int c = 5;
  double d = 2;
  cout << (b / a) << endl; // This will perform integer division
  cout << (c / d) << endl; // This will perform floating-point division

  return 0;
}