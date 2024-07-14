//Example 1: Program to Print a Half-Pyramid Using *

#include<iostream>
using namespace std;

int main()
{
 int rows;
 
 cout << "Enter number of rows: ";
 cin >> rows;
 
 for(int i = 1; i <= rows; ++i)
 {
  for(int j = 1; j <= i; ++j)
  {
   cout << "* ";
  }
  cout << "\n";
 }
 return 0;
}

//Output
Enter number of rows: 5
* 
* * 
* * * 
* * * * 
* * * * * 
--------------------------------------------------------------------------------------------
//Example 2: Program to Print a Half-Pyramid Using Numbers

#include<iostream>
using namespace std;

int main()
{
 int rows;
 
 cout << "Enter number of rows: ";
 cin >> rows;
 
 for(int i = 1; i <= rows; ++i)
 {
  for(int j = 1; j <= i; ++j)
  {
   cout << j << " ";
  }
  cout << "\n";
 }
 return 0;
}

//Output
Enter number of rows: 5
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
--------------------------------------------------------------------------------------------------------
//Example 3: Program to Print Half-Pyramid Using Alphabets

#include<iostream>
using namespace std;

int main()
{
 char input, alphabet = 'A';
 
 cout << "Enter the uppercase charcter you want to print in the last row: ";
 cin >> input;
 
 //convert input character to uppercase
 input = toupper(input);
 
 for(int i = 1; i <= (input - 'A' + 1); ++i)
 {
  for(int j = 1;j <= i; ++j)
  {
   cout << alphabet << " ";
  }
  ++alphabet;
  cout << endl;
 }
 return 0;
}

//Output
Enter the uppercase charcter you want to print in the last row: e
A 
B B 
C C C 
D D D D 
E E E E E 
----------------------------------------------------------------------------------------------------------
//Example 4: Inverted Half-Pyramid Using *

#include<iostream>
using namespace std;

int main()
{
 int rows;
 
 cout << "Enter number of rows: ";
 cin >> rows;
 
 for(int i = rows; i >= 1; --i)
 {
  for(int j = 1; j <= i; ++j)
  {
   cout << "* ";
  }
  cout << endl;
 }
 return 0;
}

//Output
Enter number of rows: 5
* * * * * 
* * * * 
* * * 
* * 
* 
---------------------------------------------------------------------------------------------------------------
//Example 5: Inverted Half-Pyramid Using Numbers

#include<iostream>
using namespace std;

int main()
{
 int rows;
 
 cout << "Enter number of rows: ";
 cin >> rows;
 
 for(int i = rows; i >= 1; --i)
 {
  for(int j = 1; j <= i; ++j)
  {
   cout << j << " ";
  }
  cout << endl;
 }
 return 0;
}

//Output
Enter number of rows: 5
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
---------------------------------------------------------------------------------------------------------------
//Example 6: Program to Print a Full Pyramid Using *

#include<iostream>
using namespace std;

int main()
{
 int space, rows;
 cout << "Enter number of rows: ";
 cin >> rows;
 
 for(int i = 1, k = 0; i <= rows; ++i, k = 0)
 {
  for(space = 1;space <= rows - i; ++space)
  {
   cout << "  ";
  }
  while(k != 2 * i - 1)
  {
   cout << "* ";
   ++k;
  }
  cout << endl;
 }
 return 0;
}

//Output
Enter number of rows: 7
            * 
          * * * 
        * * * * * 
      * * * * * * * 
    * * * * * * * * * 
  * * * * * * * * * * * 
* * * * * * * * * * * * * 
----------------------------------------------------------------------------------------------------------------------
