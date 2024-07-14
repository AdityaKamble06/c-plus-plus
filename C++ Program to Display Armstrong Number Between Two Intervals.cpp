//Example: Display Armstrong Number Between Intervals

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
 int num1, num2, i, num, digit, sum, count;
 
 cout << "Enter first number: ";
 cin >> num1;
 
 cout << "Enter second number: ";
 cin >> num2;
 
 //swap if num1 > num2
 if(num1 > num2)
 {
  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;
 }
 
 cout << "Armstrong numbers between " << num1 << " and " << num2 << " are: " << endl;
 
 //print Armstrong numbers from num1 to num2
 for(i = num1; i <= num2; i++)
 {
  //count gives the number of digits in i
  count = 0;
  
  //store value of i in num
  num = i;
  
  //count the number of digits in num and i 
  while(num > 0)
  {
   ++count;
   num /= 10;
  }
  
  //initialize sum to 0 
  sum = 0;
  
  //store i in num again
  num = i;
  
  //count the number of digits in num and i 
  while(num > 0)
  {
   digit = num % 10;
   sum = sum + pow(digit, count);
   num /= 10;
  }
  
  //if sum is equal to i, then it is Armstrong
  if(sum == i)
  {
   cout << i << ", ";
  }
 }
 return 0;
}


//Output
Enter first number: 1
Enter second number: 10000
Armstrong numbers between 1 and 10000 are: 
1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634, 8208, 9474,
