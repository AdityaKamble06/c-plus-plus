//Example 1: Display Prime Numbers Between two Intervals

#include <iostream>
using namespace std;

int main() 
{

 int low, high, i;
 bool is_prime = true;

 cout << "Enter two numbers (intervals): ";
 cin >> low >> high;

 cout << "\nPrime numbers between " << low << " and " << high << " are: " << endl;

 while (low < high) 
 {
  is_prime = true;

  // 0 and 1 are not prime numbers
  if (low == 0 || low == 1) 
  {
   is_prime = false;
  }
 
  for (i = 2; i <= low/2; ++i) 
  {
   if (low % i == 0) 
   {
    is_prime = false;
    break;
   }
  }
   
  if (is_prime)
  {
   cout << low << ", ";
  }
  ++low;
 }

 return 0;
}

//Output
Enter two numbers (intervals): 0
20

Prime numbers between 0 and 20 are: 
2, 3, 5, 7, 11, 13, 17, 19, 
