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
  int magic_num;
  int guess;
  bool running = true;

  cout << "What will be the magic number?: ";
  cin >> magic_num;
  while(running) {
    cout << "What is your guess from 1-10?: ";
    cin >> guess;
    if (guess > magic_num) {
      cout << guess << " is too high try again..\n\n";
    } else if (guess < magic_num) {
      cout << guess << " is too low try again..\n\n";
    } else if (guess == magic_num) {
      cout << "Correct! Exiting..\n";
      running = false;
    }
  }




}
