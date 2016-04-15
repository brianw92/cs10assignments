//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assn<05>/main.cpp
/// @brief Assignment/Lab <05> for CS 12 <Spring 2015>
///
/// @author <Brian Wong> [bwong012@ucr.edu]
/// @date <May 12, 2015>
///
/// @par Enrollment Notes 
///     Lecture Section: <001>
/// @par
///     Lab Section: <021>
/// @par
///     TA: <Anthony>
///
/// @par Plagiarism Section
/// I hereby certify that the code in this file
/// is ENTIRELY my own original work.
//  ================== END ASSESSMENT HEADER ===============

#include <iostream>
#include "IntVector.h"
using namespace std;


int main()
{
  IntVector theVec(20, 5);
  
  cout << "Size: " << theVec.size() << endl;
  
  cout << "Value at index 10; value should be 5: " << theVec.at(10) << endl;
  
  theVec.resize(30, 2);
  
  cout << "Size after resize to 30: " << theVec.size() << endl;
  
  cout << "Value at index 10 after resize, new value 2: " << theVec.at(10) << endl
       << "Value at index 29 after resize, new value 2: " << theVec.at(29) << endl;
  
  theVec.erase(29);
  
  cout << "Size after erasing index 29: " << theVec.size() << endl;
  
  theVec.resize(2, 7); // This isn't working.
  
  cout << "Value at index 1 after resize to 2, new value 5: " << theVec.at(1) << endl;
  
  theVec.resize(5, 4); // This isn't working.
  
  cout << "Value at index 4 after resize to 5, new value 4: " << theVec.at(4) << endl;

  return 0;
}