//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assn<04>/BBoard.h
/// @brief Assignment/Lab <04> for CS 12 <Spring 2015>
///
/// @author <Brian Wong> [bwong012@ucr.edu]
/// @date <May 4, 2015>
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


#include "Message.h"

using namespace std;

Message::Message()
{
    author = "";
    subject = "";
    body = "";
}

Message::Message(const string &athr, const string &sbjct, const string &body)
{
    author = athr;
    subject = sbjct;
    this->body = body;
}

void Message::display()
{
    for (int i = 0; i < message_list.size(); i++)  // DOES THIS WORK? CALLS TO MESSAGE_LIST, WHICH IS A PART OF BBOARD.
    {
        cout << subject << endl << "from " << author << ": " << body << endl;
    }
    
    cout << endl;
}