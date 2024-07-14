//Example: Display all Factors of a Number

#include<iostream>
using namespace std;

int main()
{
 int n, i;
 
 cout << "Enter a positive integer: ";
 cin >> n;
 
 cout << "Factor of " << n << " are: ";
 
 for(i = 1; i <= n; ++i)
 {
  if(n % i == 0)
  cout << i << " ";
 }
 
 return 0;
}

//Output
Enter a positive integer: 60
Factor of 60 are: 1 2 3 4 5 6 10 12 15 20 30 60
