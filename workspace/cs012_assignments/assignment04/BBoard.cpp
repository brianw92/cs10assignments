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


#include <cstdlib>
#include "BBoard.h"
#include "User.h"
#include "Message.h"

using namespace std;

BBoard::BBoard()
{
    title = "The Fuckin' Bulletin Board";
    user_list.User(); // DUNNO BOUT THIS ONE - PUSHBACKS? - single or vector? POPULATE WITH "SETUP" FUNCTION?
    message_list.pushback(Message()); // DUNNO BOUT THIS ONE - PUSHBACKS?
}


BBoard::BBoard(const string &ttl)
{
    title = ttl;
    user_list.pushback(User()); // DUNNO BOUT THIS ONE - PUSHBACKS? - single or vector? POPULATE WITH "SETUP" FUNCTION?
    message_list.pushback(Message()); // DUNNO BOUT THIS ONE - PUSHBACKS?
}






void BBoard::setup(const string &input_file) // DONE
{
    ifstream fin;
    ofstream fout;
    
    fin.open(input_file.cstr()); 
    
    string usrnm; 
    string pswrd; 
    
    while (fin >> usrnm >> pswrd)
    {
        User newUser(usrnm, pswrd);
        
        user_list.pushback(newUser);
    }
}





void BBoard::login() // DONE - DOES THE LOOP PASS IN ARGUMENTS FOR CHECK FUNCTION?
{
    bool existent = false;
     
    do
    {
        string usrname;
        string psword;
        
        cout << "Enter your username ('Q' or 'q' to quit): ";
        cin >> usrname;
        
        if (usrname == 'Q' || usrname == 'q')
        {
            cout << "Bye!\n";
            exit(0);
        }
        
        cout << "Enter your password: ";
        cin >> psword;
        
        User enteredUser(usrname, psword);
        
        do (int i = 0; i < user_list.size(); i++)
        {
            if (user_list.at(i).check() == true)
            {
                existent = true;
            }
        }
        while (existent != true)
    }
    while (existent != true);
    
    current_user = enteredUser;
}


void display() const 
{
    if (message_list.size() == 0)
    {
        cout << "Nothing to Display." << endl;
        
        exit(0);
    }
    
    for (int i = 0; i < message_list.size(); i++)
    {
        cout << "-----------------------------------------------" << endl 
             << "Message #" << i + 1 << ": " << message_list.at(i).display();
    }
    
    cout << "-----------------------------------------------" << endl;
}





void BBoard::run()
{
    if ()
}