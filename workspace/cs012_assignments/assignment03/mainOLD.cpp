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
#include <cstring>
#include <cmath>
#include <fstream>

using namespace std;



class Date
{
    private:
        unsigned day;
        unsigned month;
        string monthName;
        unsigned year;     //NOTE: this class is NOT designed to handle negative years, aka "BC"
        bool isLeap(unsigned) const;
        unsigned daysPerMonth(unsigned, unsigned) const;
        string name(unsigned) const;
        unsigned number(const string &) const;

    
    public:
        Date();
        Date(unsigned, unsigned, unsigned);
        Date(const string &, unsigned, unsigned);
        void printNumeric() const;
        void printAlpha() const;
    
};




// Constructors

Date::Date()
{
    monthName = "January";
    day = 1;
    year = 2000;
}





Date::Date(unsigned m, unsigned d, unsigned y)
{
    if (m > 12 || d > daysPerMonth(m, y))   // FIXME*******
    {
        if (m > 12)
        {
            m = 12;
        }
        
        if (d > daysPerMonth(m, y))    // FIXME*********
        {
            d = 31;
        }
        
        cout << "Invalid date values: Date corrected to " << m << "/" << d 
             << "/" << y << endl;
    }
    
    month = m;
    day = d;
    year = y;
}




Date::Date(const string &mn, unsigned d, unsigned y)
{
    if (!(mn == "January" || mn == "February" || mn == "March" || mn == "April"
        || mn == "May" || mn == "June " || mn == "July" || mn == "August" 
        || mn == "September" || mn == "October" || mn == "November" 
        || mn == "December" || mn == "january" || mn == "february" 
        || mn == "march" || mn == "april" || mn == "may" || mn == "june" 
        || mn == "july" || mn == "august" || mn == "september" 
        || mn == "october" || mn == "november" || mn == "december"))
    {
            monthName = "January";
            d = 1;
            y = 2000;
            cout << "Invalid month name: the Date was set to 1/1/2000" << endl;
    }
    
    else
    {
        monthName = mn;
    }
    
    day = d;
    year = y;
}





void Date::printNumeric() const // const accessor function to output a Date exactly in the format "3/1/2012".
{
    cout << month << "/" << day << "/" << year; // No endl
}





void Date::printAlpha() const // const accessor function to output a Date exactly in the format "March 1, 2012".
{
    cout << monthName << ' ' << day << ", " << year;
}






bool Date::isLeap(unsigned year) const
{
    if (year % 400 == 0)
    {
        return true;
    }
    
    if (year % 100 == 0)
    {
        return false;
    }
    
    if (year % 4 == 0)
    {
        return true;
    }
    
    return false;
}





unsigned Date::daysPerMonth(unsigned m, unsigned y) const 
{
    if (m == 4 || m == 6 || m == 9 || m == 11) // Apr, June, Sept, Nov each have 30 days
    {
        return 30; 
    }
    
    if (m != 2) // All other months but Feb have 31 days; any month > 12 defaults to 31 days
    {
        return 31;
    }
    
    if (isLeap(y)) // If isLeap, there are 29 days in Feb
    {
        return 29;
    }
    
    return 28; // All non-leap years, there are 28 days in Feb
}





string Date::name(unsigned m) const
{
    if (m = 1)
    {
        return "January";
    }
    
    if (m = 2)
    {
        return "February";
    }
    
    if (m = 3)
    {
        return "March";
    }
    
    if (m = 4)
    {
        return "April";
    }
    
    if (m = 5)
    {
        return "May";
    }
    
    if (m = 6)
    {
        return "June";
    }
    
    if (m = 7)
    {
        return "July";
    }
    
    if (m = 8)
    {
        return "August";
    }
    
    if (m = 9)
    {
        return "September";
    }
    
    if (m = 10)
    {
        return "October";
    }
    
    if (m = 11)
    {
        return "November";
    }
    
    return "December";
}





unsigned Date::number(const string &mn) const
{
    if (mn == "January")
    {
        return 1;
    }
    
    if (mn == "February")
    {
        return 2;
    }
    
    if (mn == "March")
    {
        return 3;
    }
    
    if (mn == "April")
    {
        return 4;
    }
    
    if (mn == "May")
    {
        return 5;
    }
    
    if (mn == "June")
    {
        return 6;
    }
    
    if (mn == "July")
    {
        return 7;
    }
    
    if (mn == "August")
    {
        return 8;
    }
    
    if (mn == "September")
    {
        return 9;
    }
    
    if (mn == "October")
    {
        return 10;
    }
    
    if (mn == "November")
    {
        return 11;
    }
    
    return 12;
}




int main()
{
    
    return 0;
}