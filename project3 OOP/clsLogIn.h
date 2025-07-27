#pragma once

#include <iostream>
#include "clsScreen.h"
#include "clsUser.h"
#include <iomanip>
#include "clsMainScreen.h"
#include "Global.h"
#include"clslogInFile.h";
class clsLogIn: clsScreen
{
private:
	static void _LogIn()
	{
         bool LoginFaild = false;

        string Username, Password;
        int num = 3;
        do
        {

            if (LoginFaild)
            {
                cout << "\n\nInvlaid Username/Password!\n";
               num--;
               cout << "You have " << num << " Trials to login\n \n";
               if (num == 0)
               { 
                   cout << "\n\nYour are Locked after 3 faild trails\n";
                  exit(0);
            }
}
            cout << "Enter Username? ";
            cin >> Username;

            cout << "Enter Password? ";
            cin >> Password;

            CurrentUser = clsUser::Find(Username, Password);

            LoginFaild = CurrentUser.IsEmpty();
           
        } while (LoginFaild&&num>0);

        clslogInFile::SaveUserInFile();
        clsMainScreen::ShowMainMenue();


	}
public:
	static void LogIn()
	{ 
	_DrawScreenHeader("\t\tLogIn");
    
    _LogIn();
}
};

