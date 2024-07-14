//Example: Check Armstrong Number of 3 Digits

#include<iostream>
using namespace std;

int main()
{
 int num, originalNum, remainder, result = 0;
 cout << "Enter a three-digit integer: ";
 cin >> num;
 originalNum = num;
 
 while(originalNum != 0)
 {
  //remainder containes the last digit
  remainder = originalNum % 10;
  
  result += remainder * remainder * remainder;
  
  //removing last digit form the original number
  originalNum /= 10;
 }
 
 if(result == num)
 {
  cout << num << " is an Armstrong number.";
 }
 else
 {
  cout << num << " is not an Armstrong number.";
 }
 return 0;
}

//Output
Enter a three-digit integer: 233
233 is not an Armstrong number.
