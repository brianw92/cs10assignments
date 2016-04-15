//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assn<03>/main.cpp 
/// @brief Assignment/Lab <03> for CS 12 <Spring 2015>
///
/// @author <Brian Wong> [bwong012@ucr.edu]
/// @date <Apr 23, 2015>
///
/// @par Enrollment Notes 
///     Lecture Section: <001>
/// @par
///     Lab Section: <021>
/// @par
///     TA: <TA name>
///
/// @par Plagiarism Section
/// I hereby certify that the code in this file
/// is ENTIRELY my own original work.
//  ================== END ASSESSMENT HEADER ===============


#include <cstdlib>
#include <iostream>

#include "Date.h"

using namespace std;



void test1()
{
    cout << "1. Default" << endl; 
    Date x = Date(); 
    cout << "numeric:\t" ; 
    x.printNumeric(); cout << endl; 
    cout << "alpha:\t"; 
    x.printAlpha(); 
    cout << endl; 
    cout << "-------------" << endl; 
}

void test2()
{
    cout << "2. Numeric Date: 7.3.1991" << endl; 
    Date x = Date(7,3,1991);
    cout << "numeric:\t" ; 
    x.printNumeric(); 
    cout << endl; 
    cout << "alpha:\t"; 
    x.printAlpha(); 
    cout << endl; 
    cout << "-------------" << endl; 
}

void test3()
{
    cout << "3. Alpha Date: July 3, 1991" << endl; 
    Date x = Date("July",3,1991); 
    cout << "numeric:\t" ; 
    x.printNumeric(); 
    cout << endl;
    cout << "alpha:\t"; 
    x.printAlpha(); 
    cout << endl; 
    cout << "-------------" << endl; 
}

void test4()
{
    cout << "4. Invalid Numeric Date: 0.3.1991 > 1.3.1991" << endl; 
    Date x = Date(0,3,1991); 
    cout << "numeric:\t" ; 
    x.printNumeric(); 
    cout << endl; 
    cout << "alpha:\t"; 
    x.printAlpha(); 
    cout << endl; 
    cout << "------------" << endl; 
}

void test5()
{
    cout << "5. Invalid Alpha Date: 1.adf.1991 > 1.1.2000" << endl; 
    Date x = Date("adf",1, 1991); 
    cout << "numeric:\t" ; x.printNumeric(); 
    cout << endl; 
    cout << "alpha:\t"; 
    x.printAlpha(); 
    cout << endl; 
    cout << "-------------" << endl;
}


int main()
{
    test1(); 
    test2(); 
    test3(); 
    test4(); 
    test5();

    return 0;
}