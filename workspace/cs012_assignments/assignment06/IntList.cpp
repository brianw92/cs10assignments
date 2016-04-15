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
#include <cstdlib>
#include "IntList.h"

using namespace std;

IntList::IntList() // DONE
{
    head = 0;
    tail = 0;
}

IntList::~IntList()
{
    IntNode *temp;
    
    while (head != 0)
    {
        temp = head->next;
        
        delete head;
        
        head = temp;
    }
}

void IntList::display() const
{
    // This function displays to a single line all of the int values stored in the list, 
    // each separated by a space. It should NOT output a newline or space at the end.
    
    if (head != 0)
    {
        IntNode *temp;
    
        temp = head;
    
        while (temp != 0)
        {
            if (temp != tail)
            {
                cout << temp->data << ' ';
            }
            else
            {
                cout << temp->data;
            }
            temp = temp->next;
        }
    }
}

void IntList::push_front(int value)
{
    if (head == 0)
    {
        IntNode *newVal = new IntNode(value);
        
        newVal->next = 0;
        
        head = newVal;
        tail = newVal;
    }
    
    else if (head == tail)
    {
        IntNode *newVal = new IntNode(value);
        
        newVal->next = tail;
        
        head = newVal;
    }
    
    else
    {
        IntNode *newVal = new IntNode(value);
    
        newVal->next = head;
    
        head = newVal;
    }
}


void IntList::pop_front()
{
    if (head == 0) return;
    
    if (head->next == 0)
    {
        delete head;
        head = 0;
        tail = 0;
        
        return;
    }

    IntNode *byebyeVal = head;
    
    head = head->next;
    
    delete byebyeVal;
}

void IntList::push_back(int value)
{
    IntNode *newVal = new IntNode(value);
    
    if (head == 0)
    {
        head = newVal;
        tail = newVal;
        return;
    }
    
    tail->next = newVal;
    newVal->next = 0;
    
    tail = newVal;
}

void IntList::select_sort()
{
    int temp; // Only need int value, not entire node
    IntNode *minNode;
    IntNode *i;
    IntNode *j;
    
    for (i = head; i != 0; i = i->next)
    {
        minNode = i;
        
        for (j = i->next; j != 0; j = j->next)
        {
            if (j->data < minNode->data)
            {
                minNode = j;
            }
        }
        
        if (i != minNode) // Check to see that minNode actually changed
        {
            temp = i->data;
            i->data = minNode->data;
            minNode->data = temp;
        }
    }
}

void IntList::insert_sorted(int value)
{
    IntNode *i = head;
    IntNode *newNode = new IntNode(value);
    
    if (head == 0)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    
    if (newNode->data < head->data)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    
    /* while ((i->next != 0) && (newNode->data > i->next->data)) // Also works
    {
        i = i->next;
    }
    */
    
    while (i->next != 0)
    {
        if (newNode->data < i->next->data)
        {
            break;    
        }
        
        i = i->next;
    }
    
    newNode->next = i->next;
    i->next = newNode;
    
    if (i == tail)
    {
        tail = newNode;
        // newNode->next = 0;
    }
}


void IntList::remove_duplicates()
{
    IntNode *i;
    IntNode *j;
    
    if (head == 0 || head->next == 0)
    {
        return;
    }
    
    for (i = head; i != 0; i = i->next)
    {
        j = i;
        
        while (j->next != 0)
        {
            if (j->next->data == i->data)
            {
                if (j->next == tail)
                {
                    tail = j;
                }
                
                IntNode *temp = j->next;
                j->next = j->next->next;
                delete temp;
            }
            
            else
            {
                j = j->next;
            }
        }
    }
}