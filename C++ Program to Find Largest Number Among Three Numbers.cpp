//Example 1: Find Largest Number Using if...else Statement

#include<iostream>
using namespace std;

int main()
{
 double n1, n2, n3;
 
 cout << "Enter three numbers: ";
 cin >> n1 >> n2 >> n3;
 
 //check if n1 is the largest number
 if(n1 >= n2 && n1 >= n3)
 {
  cout << "Largest number: " << n1;
 }
 
 //check if n2 is the largest number
 else if(n2 >= n1 && n2 >= n3)
 {
  cout << "Largest number: " << n2;
 }
 
 //if neither n1 or n2 are the Largest, n3 is the Largest
 else
 {
  cout << "Largest number: " << n3;
 }
 return 0;
}

//Output
Enter three numbers: 4
6
7
Largest number: 7
-----------------------------------------------------------------------------------------------
//Example 2: Find the Largest Number Using Nested if...else statement

#include<iostream>
using namespace std;

int main()
{
 double n1, n2, n3;
 
 cout << "Enter three numbers: ";
 cin >> n1 >> n2 >> n3;
 
 //check if n1 is greater than n2
 if(n1 >= n2)
 {
  //if n1 is also greater than n3,
  //then n1 is the largest number
  if(n1 >= n3)
  {
   cout << "Largest number: " << n1;
  }
  
  //but if n1 is less than n3
  //but n1 is greater than n2
  //then n3 is the largest number
  else
  {
   cout << "Largest number: " << n3;
  }
 }
 
 //else, n2 is greater than n1
 else
 {
  //if n2 is also greater than n3,
  //then n2 is the Largest number
  if(n2 >= n3)
  {
   cout <<"Largest number: " << n2;
  }
  
  //but if n2 is less than n3
  //but n2 is greater than n1
  //then n3 is the Largest number
  else
  {
   cout << "Largest number: " << n3;
  }
 }
 return 0;
}

//Output
Enter three numbers: 34
56
7
Largest number: 56
