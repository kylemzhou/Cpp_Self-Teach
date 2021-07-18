// Your First C++ Program

#include <iostream>

using std::cout;
using std::cin; 

// // // // DATA TYPES // // // //
// char grade = "A" 
// string phrase = "Giraffe Academy";
// int age = 50 ;
// double gpa = 2.0;     * These are floats
// bool isMale = true; 

int main() {
  int firstNum;
  int secondNum;

  cout << "What will your first number be?: ";
  cin >> firstNum;
  cout << "What will your second number be?: ";
  cin >> secondNum; 

  if (firstNum > secondNum) {
    cout << "Your first number, " << firstNum << "is greater than your second number," << secondNum;
  } else if (firstNum < secondNum){
     cout << "Your first number: " << firstNum << " is less than your second number: " << secondNum << "\n";
  } 

  
}
