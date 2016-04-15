//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assn<05>/IntList.cpp
/// @brief Assignment/Lab <06> for CS 12 <Spring 2015>
///
/// @author <Brian Wong> [bwong012@ucr.edu]
/// @date <May 21, 2015>
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
#include "IntList.h"
using namespace std;

int main()
{
  IntList theList;
  IntList theOtherList;
  IntList theFinalList;
  
  theList.display();
  cout << endl;

  theList.push_front(133);
  theList.display();
  cout << endl;
  
  theList.push_front(250);
  theList.display();
  cout << endl;

  theList.push_front(550);
  theList.display();
  cout << endl;
  
  theList.pop_front();
  theList.display();
  cout << endl;
  
  theList.push_back(13);
  theList.display();
  cout << endl;
  
  theList.select_sort();
  theList.display();
  cout << endl;
  
  theList.insert_sorted(10);
  theList.display();
  cout << endl;
  
  theList.insert_sorted(225);
  theList.display();
  cout << endl;
  
  theList.pop_front();
  theList.display();
  cout << endl;
  
  theList.pop_front();
  theList.display();
  cout << endl;
  
  theList.pop_front();
  theList.display();
  cout << endl;
  
  theList.push_back(45);
  theList.display();
  cout << endl;
  
  cout << "The other list shit:\n";
  
  theOtherList.insert_sorted(225);
  theOtherList.display();
  cout << endl;
  
  theOtherList.insert_sorted(12);
  theOtherList.display();
  cout << endl;
  
  theOtherList.insert_sorted(13);
  theOtherList.display();
  cout << endl;
  
  theOtherList.insert_sorted(13);
  theOtherList.display();
  cout << endl;
  
  theOtherList.insert_sorted(12);
  theOtherList.display();
  cout << endl;
  
  theOtherList.insert_sorted(5000);
  theOtherList.display();
  cout << endl;
  
  theOtherList.remove_duplicates();
  theOtherList.display();
  cout << endl;


  cout << "The other list shit:\n";
  
  theFinalList.push_front(10);
  theFinalList.display();
  cout << endl;
  
  theFinalList.push_front(10);
  theFinalList.display();
  cout << endl;
  
  theFinalList.push_front(30);
  theFinalList.display();
  cout << endl;
  
  theFinalList.push_front(5);
  theFinalList.display();
  cout << endl;
  
  theFinalList.push_front(20);
  theFinalList.display();
  cout << endl;
  
  theFinalList.push_front(10);
  theFinalList.display();
  cout << endl;
  
  theFinalList.push_back(30);
  theFinalList.display();
  cout << endl;
  
  theFinalList.remove_duplicates();
  theFinalList.display();
  cout << endl;
  
  return 0;
}