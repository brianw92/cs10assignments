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

#ifndef __INTLIST_H__
#define __INTLIST_H__

struct IntNode
{
    int data;
    IntNode *next;
    IntNode(int data):data(data), next(0) {}
};

class IntList
{
    private:
        IntNode *head;
        IntNode *tail;
    
    public:
        IntList();
        ~IntList();
        void display() const;
        void push_front(int value);
        void pop_front();
        void push_back(int value);
        void select_sort();
        void insert_sorted(int value);
        void remove_duplicates();
};

#endif