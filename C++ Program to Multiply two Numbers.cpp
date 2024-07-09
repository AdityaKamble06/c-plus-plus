//C++Program to Multiply Two Numbers

#include<iostream>
using namespace std;

int main()
{
 double num1, num2, product;
 cout << "Enter two numbers: ";
 
 //stores two floating point numbers in num1 and num2 respctively
 cin >> num1 >> num2;
 
 //performs multiplication and stores the result in product variable
 product = num1 * num2;
 
 cout << "Product = " << product;
 
 return 0;
}

//Output
Enter two numbers: 3
4
Product = 12
