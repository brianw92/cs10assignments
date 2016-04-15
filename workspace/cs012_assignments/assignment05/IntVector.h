//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assn<05>/IntVector.h
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

#ifndef __DISTANCE_H__
#define __DISTANCE_H__

class IntVector
{
    private:
        unsigned sz;
        unsigned cap;
        int *data;
        void expand();
        void expand(unsigned amount);
    
    public:
        IntVector();
        IntVector(unsigned size);
        IntVector(unsigned size, int value);
        ~IntVector();
        unsigned size() const;
        unsigned capacity() const;
        bool empty() const;
        const int &at(unsigned index) const;
        int &at(unsigned index);
        void insert(unsigned index, int value);
        void erase(unsigned index);
        const int &front() const;
        int &front();
        const int &back() const;
        int &back();
        void assign(unsigned n, int value);
        void push_back(int value);
        void pop_back();
        void clear();
        void resize(unsigned size);
        void resize(unsigned size, int value);
        void reserve(unsigned n);
};

#endif