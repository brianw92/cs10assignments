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


#include <string>

#ifndef DATE_H
#define DATE_H


class Date
{
    private:
        unsigned day;
        unsigned month;
        std::string monthName;
        unsigned year;     //NOTE: this class is NOT designed to handle negative years, aka "BC"
        bool isLeap(unsigned) const;
        unsigned daysPerMonth(unsigned, unsigned) const;
        std::string name(unsigned) const;
        unsigned number(const std::string &) const;

    
    public:
        Date();
        Date(unsigned, unsigned, unsigned);
        Date(const std::string &, unsigned, unsigned);
        void printNumeric() const;
        void printAlpha() const;
    
};

#endif