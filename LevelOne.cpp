// Your First C++ Program

#include <iostream>
// This allows you to use 'cout'

using namespace std;

// // // // DATA TYPES // // // //
// char grade = "A" 
// string phrase = "Giraffe Academy";
// int age = 50 ;
// double gpa = 2.0;     * These are floats
// bool isMale = true; 


int foo [] = {16, 2, 77, 40, 12071};
int n, result=0;

int main ()
{
  for ( n=0 ; n<5 ; ++n )
  {
    result += foo[n];
  }
  cout << foo[3];
  return 0;
}

