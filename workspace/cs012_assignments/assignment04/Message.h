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


#ifndef __MESSAGE_H__
#define __MESSAGE_H__

#include <string>

class Message
{
    private:
      string author;
      string subject;
      string body;
    
    public:
      //default constructor
      Message();
    
      //Constructor with parameters
      Message(const string &athr, const string &sbjct, const string &body);
    
      //displays the message in the given format. See output specs.
      //Note: R’Sub will require an endl as the last output of this
      //function.
      void display() const;
};

#endif

