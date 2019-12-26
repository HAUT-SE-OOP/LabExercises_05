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
template< typename T >
int printArray( const T *array , int size ,int lowSubscript,int highSubscript)//  a header for an overloaded printArray lowSubscript and highSubscript
{
   // check if subscript is negative or out of range
   if ( lowSubscript < 0|| highSubscript >= size )
      return 0;

   int count = 0;

   // display array
   for ( int i = lowSubscript; i <= highSubscript; i++)
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
   elements = printArray(a,5,0,ACOUNT-1);// a call to printArray that specifies 0 to ACOUNT - 1 as the range
   cout << elements << " elements were output\n";

   // display elements 1-3 of array a
   cout << "Array a from positions 1 to 3 is:\n";
   elements = printArray(a,5,1,3);// a call to printArray that specifies 1 to 3 as the range
   cout << elements << " elements were output\n";

   // try to print an invalid element
   cout << "Array a output with invalid subscripts:\n";
   elements = printArray(a,5,-1,10);//a call to printArray that specifies -1 to 10 as the range
   cout << elements << " elements were output\n\n";

   // display array b using original printArray function
   cout << "\nUsing original printArray function\n";
   printArray( b, BCOUNT );

   // display array b using new printArray function
   cout << "Array b contains:\n";
   elements = printArray(b,7,0,BCOUNT - 1);// a call to printArray that specifies 0 to BCOUNT - 1 as the range
   cout << elements << " elements were output\n";

   // display elements 1-3 of array b
   cout << "Array b from positions 1 to 3 is:\n";
   elements = printArray(b,7,1,3);//  a call to printArray that specifies 1 to 3 as the range
   cout << elements << " elements were output\n";

   // try to print an invalid element
   cout << "Array b output with invalid subscripts:\n";
   elements = printArray(b,7,-1,10);// a call to printArray that specifies -1 to 10 as the range
   cout << elements << " elements were output\n\n";

   // display array c using original printArray function
   cout << "\nUsing original printArray function\n";
   printArray( c, CCOUNT );

   // display array c using new printArray function
   cout << "Array c contains:\n";
   elements = printArray(c,6,0,CCOUNT - 2);// a call to printArray that specifies 0 to CCOUNT - 2 as the range
   cout << elements << " elements were output\n";

   // display elements 1-3 of array c
   cout << "Array c from positions 1 to 3 is:\n";
   elements = printArray(c,6,1,3);//  a call to printArray that specifies 1 to 3 as the range
   cout << elements << " elements were output\n";

   // try to display an invalid element
   cout << "Array c output with invalid subscripts:\n";
   elements = printArray(c,6,-1,10);// a call to printArray that specifies -1 to 10 as the range
   cout << elements << " elements were output" << endl;
} // end main
