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


/*This function generates a random double value between a and b*/
double randFloat (double a, double b)
{
    return a + (static_cast<double>(rand()) / RAND_MAX) * (b - a);
}

double mean (double a, double b)
{
    return (a + b) / 2;
}

double variance (double a, double b)
{
    return (pow((b - a), 2)) / 12;
}

double practicalMean (double arr[], int size)
{
    double sum = 0;
    
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    
    return sum / size;
}

double practicalVariance (double arr[], int size)
{
    double total = 0;
    double practicalMeanVal = practicalMean(arr, size);
    
    for (int i = 0; i < size; i++)
    {
        total += pow((arr[i] - practicalMeanVal), 2);
    }
    
    return total / (size - 1);
}

int main() 
{
    srand(333);
    
    double arrOne[500];
    double arrTwo[500];
    
    // Solve for 'a' and 'b' values by hand, using mean and variance equations 
    // and requested means and variances; input
    
    for (int i = 0; i < 500; i++)
    {
        arrOne[i] = randFloat(-3, 3);
        
        arrTwo[i] = randFloat(-7, -1);
    }
    
    // Cout that crap
 
    cout << mean(-3, 3) << ' ' <<  practicalMean(arrOne, 500)
    << ' ' << variance(-3, 3) << ' ' 
    << practicalVariance(arrOne, 500) << endl;
    
    cout << mean(-7, -1) << ' ' << practicalMean(arrTwo, 500) 
    << ' ' << variance(-7, -1) << ' ' 
    << practicalVariance(arrTwo, 500) << endl;
    
    return 0;
}