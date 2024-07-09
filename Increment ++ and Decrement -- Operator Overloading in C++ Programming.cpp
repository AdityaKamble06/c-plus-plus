//Example 1: Prefix ++ Increment Operator Overloading with no return type

#include <iostream>
using namespace std;

class Check
{
    private:
       int i;
    public:
       Check(): i(0) {  }
       void operator ++() 
          { ++i; }
       void Display() 
          { cout << "i=" << i << endl; }
};

int main()
{
 Check obj;

 // Displays the value of data member i for object obj
 obj.Display();

 // Invokes operator function void operator ++( )
 ++obj; 
  
 // Displays the value of data member i for object obj
 obj.Display();

 return 0;
}

//Output
i=0
i=1
-----------------------------------------------------------------------------------------------------------
//Example 2: Prefix Increment ++ operator overloading with return type

#include <iostream>
using namespace std;

class Check
{
 private:
   int i;
 public:
   Check(): i(0) {  }

 // Return type is Check
 Check operator ++()
 {
   Check temp;
   ++i;
   temp.i = i;

   return temp;
 }

 void Display()
 { cout << "i = " << i << endl; }
};

int main()
{
 Check obj, obj1;
 obj.Display();
 obj1.Display();

 obj1 = ++obj;

 obj.Display();
 obj1.Display();

 return 0;
}

//Output
i = 0
i = 0
i = 1
i = 1
