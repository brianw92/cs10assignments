//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assn<01>/main.cpp 
/// @brief Assignment/Lab <01> for CS 12 <Spring 2015>
///
/// @author <Brian Wong> [bwong012@ucr.edu]
/// @date <Apr 9, 2015>
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
#include <cstring>
#include <cmath>

using namespace std;

double a, b;

/*This function generates a random double value between a and b*/
double randFloat (double a, double b)
{
    return a + (static_cast<double>(rand()) / RAND_MAX) * (b - a);
}

// This function solves for a and b, given mean and variance
double rand_mv(double mean, double var)
{
    a = (sqrt(var * 12) - mean * 2) / -2;
    b = mean * 2 - a;
    
    return randFloat(a, b);
}

int main() 
{
    srand(333);
    
    double userMean, userVariance;
    
    cout << "Enter Mean: ";
    cin >> userMean;
    
    cout << "Enter Variance: ";
    cin >> userVariance;
    
    // Modify a and b before outputting
    rand_mv(userMean, userVariance);
    
    cout << a << ' ' << b << endl;
    
    return 0;
}