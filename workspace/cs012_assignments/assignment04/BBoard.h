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


#ifndef __BBOARD_H__
#define __BBOARD_H__

#include <string>
#include <vector>
#include "User.h"
#include "Message.h"

class BBoard
{
    private:
        string title;
        vector<User> user_list;
        User current_user;
        vector<Message> message_list;
    
    public:
        BBoard();
        BBoard(const string &ttl);
        void setup(const string &input_file);
        void login();
        void run();
        
    private:
        void display() const; 
};

#endif





