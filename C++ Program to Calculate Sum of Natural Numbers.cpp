//Example: Sum of Natural Numbers using loop

#include<iostream>
using namespace std;

int main()
{
 int n, sum = 0;
 
 cout << "Enter a positive integer: ";
 cin >> n;
 
 for(int i = 1; i <= n; ++i)
 {
  sum += i;
 }
 
 cout << "Sum = " << sum;
 
 return 0;
}

//Output
Enter a positive integer: 50
Sum = 1275
