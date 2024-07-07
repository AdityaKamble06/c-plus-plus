//Example 1: Check Leap Year Using if...else Ladder

#include<iostream>
using namespace std;

int main()
{
 int year;
 cout << "Enter a year: ";
 cin >> year;
 
 //leap year if perfectly divisible by 400
 if(year % 400 == 0)
 {
  cout << year << " is a leap year.";
 }
 
 //not a leap year if divisible by 100
 //but not divisible by 400
 else if(year % 100 == 0)
 {
  cout << year << " is not a leap year.";
 }
 
 //leap year ifnot divisible by 100
 //but divisible by 400
 else if(year % 4 == 0)
 {
  cout << year << " is a leap year.";
 }
 
 //all other years are not leap years
 else
 {
  cout << year << " is not a leap year.";
 }
 return 0;
}

//Output
Enter a year: 2024
2024 is a leap year.
-----------------------------------------------------------------------------------------------------------
//Example 2: Check Leap Year Using Nested if

#include<iostream>
using namespace std;

int main()
{
 int year;
 
 cout << "Enter a year: ";
 cin >> year;
 
 if(year % 4 == 0)
 {
  if(year % 100 == 0)
  {
   if(year % 400 == 0)
   {
    cout << year << " is a leap year.";
   }
   else
   {
    cout << year << " is a leap yaer.";
   }
  }
  else
  {
   cout << year << " is a leap year.";
  }
 }
 else
 {
  cout << year << " is not a leap year.";
 }
 return 0;
}

//Output
Enter a year: 2023
2023 is not a leap year.
----------------------------------------------------------------------------------------
//Example 3: Check Leap Year Using Logical Operators

#include<iostream>
using namespace std;

int main()
{
 int year;
 
 cout << "Enter a year: ";
 cin >> year;
 
 //if year is divisible by 4 AND not divisible by 100
 //OR if year is divisible by 400
 //then it is a leap year
 if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
 {
  cout << year << " is a leap year.";
 }
 else
 {
  cout << year << " is not a leap year.";
 }
 return 0;
}

//Output
Enter a year: 2025
2025 is not a leap year.





























