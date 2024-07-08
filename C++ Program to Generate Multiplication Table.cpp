//Example 1: Display Multiplication Table up to 10

#include<iostream>
using namespace std;

int main()
{
 int n; 
  
 cout << "Enter a positive integer: ";
 cin >> n;
 
 //run a loop from 1 to 10
 //print the multiplication table 
 
 for(int i = 1; i <= 10; ++i)
 {
  cout << n << " * " << i << " = " << n * i << endl;
 }
 return 0;
}

//Output
Enter a positive integer: 2
2 * 1 = 2
2 * 2 = 4
2 * 3 = 6
2 * 4 = 8
2 * 5 = 10
2 * 6 = 12
2 * 7 = 14
2 * 8 = 16
2 * 9 = 18
2 * 10 = 20
-------------------------------------------------------------------------------------
//Example 2: Display Multiplication Table up to a Given Range

#include<iostream>
using namespace std;

int main()
{
 int n, range; 
  
 cout << "Enter a positive integer: ";
 cin >> n;
 
 cout << "Enter range: ";
 cin >> range;
 
 for(int i = 1; i <= range; ++i)
 {
  cout << n << " * " << i << " = " << n * i << endl;
 }
 return 0;
}

//Output
Enter a positive integer: 5
Enter range: 3
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
