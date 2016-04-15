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


#include "User.h"

using namespace std;

User::User() // DONE
{
    username = "";
    password = "";
}

User::User(const string& uname, const string& pass) // DONE
{
    username = uname;
    password = pass;
}



string User::get_username() const // DONE
{
    return username;
}

bool User::check(const string &uname, const string &pass) const // DONE
{
    if (uname.empty())
    {
        return false;
    }
    
    if (username == uname && password == pass)
    {
        return true;
    }
    
    return false;
}