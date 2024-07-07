//Example 1: Swap Numbers (Using Temporary Variable)

#include<iostream>
using namespace std;

int main()
{
 int a = 5, b = 10, temp;
 
 cout << "Before swapping: " << endl;
 cout <<"a = " << a << ", b = " << b << endl;
 
 temp = a;
 a = b;
 b = temp;
 
 cout << "\nAfter swapping: " << endl;
 cout <<"a = " << a << ", b = " << b << endl;
 
 return 0;
}

//Output
Before swapping: 
a = 5, b = 10

After swapping: 
a = 10, b = 5
----------------------------------------------------------------------------------------------------------
//Example 2: Swap Numbers Without Using Temporary Variables

#include<iostream>
using namespace std;

int main()
{
 int a = 5, b = 10;
 
 cout << "Before swapping: " << endl;
 cout << "a = " << a << ", b = " << b << endl;
 
 a = a + b;
 b = a - b;
 a = a - b;
 
 cout << "\nAfter swapping: " << endl;
 cout << "a = " << a << ", b = " << b << endl;
 return 0;
}

//Output
Before swapping: 
a = 5, b = 10

After swapping: 
a = 10, b = 5
