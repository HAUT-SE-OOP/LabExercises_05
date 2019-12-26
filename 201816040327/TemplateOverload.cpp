// Lab 1: TemplateOverload.cpp
// Using template functions
#include <iostream>
using namespace std;

// function template printArray definition
// original function
template< typename T >
void printArray( const T *array, int count )
{
   // display array
   for ( int i = 0; i < count; i++ )
      cout << array[ i ] << " ";

   cout << endl;
} // end function printArray

// overloaded function template printArray
// takes upper and lower subscripts to print
/* Write a header for an overloaded printArray function
   that takes two additional int arguments, lowSubscrip
   and highSubscript; remember to include the template
   header */
//为一个重载的printArray函数写一个头，该函数有两个额外的int参数，lowSubscrip和highSubscript;记住要包括//模板头
template< typename T >
int printArray( const T *array, int size, int highSubscript, int lowSubscript)

{
   // check if subscript is negative or out of range
   if ( /* Write conditions to test if the size if negative,
           or if the range is invalid */
       //编写条件来测试大小是否为负数，或者范围是否无效
       highSubscript > size && lowSubscript < 0
       )
      return 0;

   int count = 0;

   // display array
   for ( /* Write code to iterate from lowSubscript up to
            and including highSubscript */
            int i = 1; i < 3; i ++
        //写代码来迭代从低下标直到包括highsubscript

        )
   {
      ++count;
      cout << array[ i ] << ' ';
   } // end for

   cout << '\n';
   return count; // number or elements output
} // end overloaded function printArray

int main()
{
   const int ACOUNT = 5; // size of array a
   const int BCOUNT = 7; // size of array b
   const int CCOUNT = 6; // size of array c

   // declare and initialize arrays
   int a[ ACOUNT ] = { 1, 2, 3, 4, 5 };
   double b[ BCOUNT ] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
   char c[ CCOUNT ] = "HELLO"; // 6th position for null
   int elements;

   // display array a using original printArray function
   cout << "\nUsing original printArray function\n";
   printArray( a, ACOUNT );

   // display array a using new printArray function
   cout << "Array a contains:\n";
   elements = /* Write a call to printArray that specifies
                 0 to ACOUNT - 1 as the range
               编写对printArray的调用，该调用指定0到ACOUNT - 1作为范围*/
       printArray(a,5,0, ACOUNT - 1);
   cout << elements << " elements were output\n";

   // display elements 1-3 of array a
   cout << "Array a from positions 1 to 3 is:\n";
   elements = /* Write a call to printArray that specifies
                 1 to 3 as the range
               编写对printArray的调用，指定1到3作为范围*/
       printArray(a,5,1,3);
   cout << elements << " elements were output\n";

   // try to print an invalid element
   cout << "Array a output with invalid subscripts:\n";
   elements = /* Write a call to printArray that specifies
                 -1 to 10 as the range */
       printArray(a,5,-1, 10);
   cout << elements << " elements were output\n\n";

   // display array b using original printArray function
   cout << "\nUsing original printArray function\n";
   printArray(b, BCOUNT );

   // display array b using new printArray function
   cout << "Array b contains:\n";
   elements = /* Write a call to printArray that specifies
                 0 to BCOUNT - 1 as the range */
       printArray(b, 7, 0, BCOUNT -1);
   cout << elements << " elements were output\n";

   // display elements 1-3 of array b
   cout << "Array b from positions 1 to 3 is:\n";
   elements = /* Write a call to printArray that specifies
                 1 to 3 as the range */
       printArray(b, 7, 1, 3);
   cout << elements << " elements were output\n";

   // try to print an invalid element
   cout << "Array b output with invalid subscripts:\n";
   elements = /* Write a call to printArray that specifies
                 -1 to 10 as the range */
       printArray(b, 7, -1, 10);
   cout << elements << " elements were output\n\n";

   // display array c using original printArray function
   cout << "\nUsing original printArray function\n";
   printArray( c, CCOUNT );

   // display array c using new printArray function
   cout << "Array c contains:\n";
   elements = /* Write a call to printArray that specifies
                 0 to CCOUNT - 2 as the range */
                 printArray(c, 6, 0, -2);
   cout << elements << " elements were output\n";

   // display elements 1-3 of array c
   cout << "Array c from positions 1 to 3 is:\n";
   elements = /* Write a call to printArray that specifies
                 1 to 3 as the range */
                 printArray(c, 6, 1, 3);
   cout << elements << " elements were output\n";

   // try to display an invalid element
   cout << "Array c output with invalid subscripts:\n";
   elements = /* Write a call to printArray that specifies
                 -1 to 10 as the range */
                 printArray(c, 6, -1, 10);
   cout << elements << " elements were output" << endl;
} // end main


/**************************************************************************
 * (C) Copyright 1992-2012 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
