//Example: C++ Program to Reverse an Integer

#include<iostream>
using namespace std;

int main()
{
 int n, reversed_number = 0, remainder;
 
 cout << "Enter an integer: ";
 cin >> n;
 
 while(n != 0)
 {
  remainder = n % 10;
  reversed_number = reversed_number * 10 + remainder;
  n /= 10;
 }
 
 cout << "Reversed Number = " << reversed_number;
 return 0;
}

//Output
Enter an integer: 32456
Reversed Number = 65423
