#pragma once
#include <iostream>
#include"clsUser.h";
#include"Global.h";
#include"Global.h";
using namespace std;

class clsScreen
{
protected:
    static void _DrawScreenHeader(string Title, string SubTitle = "")
    {
        cout << "\t\t\t\t\t______________________________________";
        cout << "\n\n\t\t\t\t\t  " << Title;
        if (SubTitle != "")
        {
            cout << "\n\t\t\t\t\t  " << SubTitle;
        }
        cout << "\n\t\t\t\t\t______________________________________\n\n";
        cout << "\t\t\t\t\tUser : " << CurrentUser.UserName << endl;
        Date_User();
    }
   static void Date_User()
    {
      
       time_t t = time(0);
       tm* now = localtime(&t);
       short _Day = 1;
       short _Month = 1;
       short _Year = 1900;

       _Day = now->tm_mday;
       _Month = now->tm_mon + 1;
       _Year = now->tm_year + 1900;
       cout << "\t\t\t\t\tDate : " << _Day << "/" << _Month << "/" << _Year << endl << endl;
    }
    static bool CheckAccessRights(clsUser::enPermissions Permission)
    {
        if (!CurrentUser.CheckAccessPermissions(Permission))
        {
            cout << "\t\t\t\t\t-------------------------------------------------\n";
            cout << "\n\t\t\t\t\t\t  Access  Denied ! Contact Your Access       \n";
            cout << "\t\t\t\t\t-------------------------------------------------\n";
            return false;

        }
        else
            return true;
    }
   

};

