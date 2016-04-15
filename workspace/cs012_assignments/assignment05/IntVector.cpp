//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assn<05>/IntVector.cpp
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
#include <cstdlib>
#include "IntVector.h"

using namespace std;

// Constructors

IntVector::IntVector()
{
    sz = 0;
    cap = 0;
    data = 0;
}

IntVector::IntVector(unsigned size)
{
    sz = size;
    cap = size;
    data = new int[size];
}

IntVector::IntVector(unsigned size, int value)
{
    sz = size;
    cap = size;
    data = new int[size];
    
    for (unsigned i = 0; i < cap; i++)
    {
        data[i] = value;
    }
}


// DESTRUCTOR

 IntVector::~IntVector() // FIXME
 {
    delete []data;
 }


// Functions

unsigned IntVector::size() const
{
    return sz;
}

unsigned IntVector::capacity() const
{
    return cap;
}

bool IntVector::empty() const
{
    if (sz == 0)
    {
        return true;
    }
    
    return false;
}

const int &IntVector::at(unsigned index) const
{
    if (index >= sz)
    {
        exit(1);
    }
    
    return data[index];
}

int &IntVector::at(unsigned index) // DIFFERENCE?
{
    if (index >= sz)
    {
        exit(1);
    }
    
    return data[index];
}

void IntVector::insert(unsigned index, int value)
{
    sz++;
    
    if (cap < sz) 
    {
        expand();
    }
    
    for (unsigned i = sz - 1; i >= index + 1; i--)
    {
        data[i] = data[i - 1];
    }
    
    data[index] = value;
}

void IntVector::erase(unsigned index)
{
    if (index >= sz)
    {
        exit(1);
    }
    
    for (unsigned i = index; i < sz - 1; i++)
    {
        data[i] = data[i + 1];
    }
    
    sz--;
}

const int &IntVector::front() const
{
    return data[0];
}

int &IntVector::front() // DIFFERENCE?
{
    return data[0];
}

const int &IntVector::back() const
{
    return data[sz - 1];
}

int &IntVector::back() // DIFFERENCE?
{
    return data[sz - 1];
}

void IntVector::assign(unsigned n, int value)
{
    sz = n;
    
    if (cap < sz) // MAKE HELPER FUNCTION -- SEE SPECS -- SPECIAL CASE
    {
        if ((cap * 2) >= (sz - cap))
        {
            expand();
        }
        
        else
        {
            expand(sz - cap);
        }
    }
    
    for (unsigned i = 0; i < sz; i++)
    {
        data[i] = value;
    }
}

void IntVector::push_back(int value)
{
    if (cap < sz + 1) 
    {
        expand();
    }
    
    sz++;
    
    data[sz - 1] = value;
}

void IntVector::pop_back()
{
    if (empty()) // How do you call the empty function? Seems to work.
    {
        exit(1);
    }
    
    sz--;
}

void IntVector::clear()
{
    sz = 0;
}

void IntVector::resize(unsigned size)
{
    if (size > sz)
    {
        if (cap < size)
        {
            if ((cap * 2) >= (size - cap))
            {
                expand();
            }
            
            else
            {
                expand(size - cap);
            }
        }
        
        unsigned origSize = sz;
        sz = size;
        
        for (unsigned i = origSize; i < sz; i++)
        {
            data[i] = 0;
        }
    }
    
    else
    {
        sz = size;
    }
}

void IntVector::resize(unsigned size, int value)
{
    if (size > sz)
    {
        if (cap < size) 
        {
            if ((cap * 2) >= (size - cap))
            {
                expand();
            }
            
            else
            {
                expand(size - cap);
            }
        }
        
        unsigned origSize = sz;
        sz = size;
         
        for (unsigned i = origSize; i < sz; i++)
        {
            data[i] = value;
        }
    }
    
    else
    {
        sz = size;
    }
}

void IntVector::reserve(unsigned n)
{
    if (cap < n) 
    {
        if ((cap * 2) >= n)
        {
            expand();
        }
        
        else
        {
            expand(n - cap);
        }
    }
}



// HELPER FUNCTIONS

void IntVector::expand() 
{
    int *tempdata = new int[sz];
    
    for (unsigned i = 0; i < sz; i++)
    {
        tempdata[i] = data[i];
    }
    
    delete []data;
    
    if (cap == 0)
    {
        cap++;                 // CAP MUST BE AT LEAST 1
    }
    
    else
    {
        cap *= 2;
    }
    
    data = new int[cap]; // CAP OR SZ?
    
    for (unsigned i = 0; i < sz; i++)
    {
        data[i] = tempdata[i];
    }
    
    delete []tempdata;
}

void IntVector::expand(unsigned amount)  
{
    int *tempdata = new int[sz];
    
    for (unsigned i = 0; i < sz; i++)
    {
        tempdata[i] = data[i];
    }
    
    delete []data; // CALL TO DESTRUCTOR?
    
    cap += amount;
    
    data = new int[cap]; // CAP OR SZ?
    
    for (unsigned i = 0; i < sz; i++)
    {
        data[i] = tempdata[i];
    }
    
    delete []tempdata;
}