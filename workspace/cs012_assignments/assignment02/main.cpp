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
#include <fstream>

using namespace std;


void cellTemp (const double top, const double right, const double bottom,
const double left, const double tolerance, double grid[][8])
{
    // Initialize given values
    for (int j = 0; j < 8; j++)
    {
        grid[0][j] = top;
        grid[5][j] = bottom;
    }
    
    for (int i = 1; i < 5; i++)
    {
        grid[i][0] = left;
        grid[i][7] = right;
    }
    
    double maxDiff = tolerance + 1;
    
    while (maxDiff > tolerance)
    {
        maxDiff = 0;
        
        for (int i = 1; i < 5; i++)
        {
            for (int j = 1; j < 7; j++)
            {
                double temp = grid[i][j]; // Store initial value of cell temp
            
                grid[i][j] = (grid[i - 1][j] + grid[i][j + 1] + grid[i + 1][j] +
                grid[i][j - 1]) / 4;
                
                if (abs(grid[i][j] - temp) > maxDiff)
                {
                    maxDiff = abs(grid[i][j] - temp);
                }
            }
        }
    }
}

/* void printArr (const double grid[][8])
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 7; j++)
        {
            outfile << grid[i][j] << ' ';
        }
        
        outfile << endl;
    }
} */

int main()
{
    ifstream infile;
    ofstream outfile;
    
    double grid[6][8] = {0};
    double top, right, bottom, left, tolerance;
    string infileName, outfileName;
    
    
    // Get infile and outfile names from user
    cout << "Enter name of input file: ";
    cin >> infileName;
    
    cout << "Enter name of output file: ";
    cin >> outfileName;
    
    infile.open(infileName.c_str());
    
    infile >> top;
    infile >> right;
    infile >> bottom;
    infile >> left;
    infile >> tolerance;
    
    infile.close();
    
    // Run functions to calculate cell temps and output
    cellTemp(top, right, bottom, left, tolerance, grid);
    
    outfile.open(outfileName.c_str());
    
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 7; j++)
        {
            outfile << grid[i][j] << ' ';
        }
        
        outfile << endl;
    }
    
    outfile.close();
    
    return 0;
}