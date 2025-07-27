#pragma once
#include<iostream>
	using namespace std;
#include "Global.h";
#include<ctime>
#include<string>
#include<fstream>
#include"clsScreen.h";
#include"clsString.h";
#include<iomanip>
	class clslogInFile:clsScreen

{
private:
    struct stDate
    {
        string time;
        string user;
        string pass;
        string prem;
    };
	static string Date()
	{
        time_t t = time(0);
        tm* now = localtime(&t);

        int day = now->tm_mday;
        int month = now->tm_mon + 1;
        int year = now->tm_year + 1900;

        return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
   }
    static string Time()
    {
        time_t now = time(0);

        //  ÕÊÌ·Â ≈·Ï ÂÌﬂ· tm ·⁄—÷ «· ›«’Ì·
        tm* ltm = localtime(&now);

     

        int hour = ltm->tm_hour;  // «·”«⁄…
        int minute = ltm->tm_min; // «·œﬁÌﬁ…
        int second = ltm->tm_sec; // «·À«‰Ì…

       
       
       return(to_string(hour)+":" + to_string(minute )+ ":" +to_string(second));

    }
    static string LineInFile()
    {
        string sword = "#//#";
        return(Date() + "_" + Time() +sword+ CurrentUser.UserName + sword + CurrentUser.Password + sword + to_string(CurrentUser.Permissions));
    }
    static vector<string> ConvertLineToVector(string line, string sword = "#//#")
    {
        vector<string>vLine = clsString::Split(line, sword);
        if (vLine.size() == 4)
            return vLine;
    }
public:
    static void SaveUserInFile()
    {
        fstream MyFile;
        MyFile.open("LogInFile.txt", ios::app);
        if (MyFile.is_open())
        {
            MyFile << LineInFile() << endl;
            MyFile.close();
        }
    }
    static void PrintUsersLogIn()
    {
          _DrawScreenHeader("\t\tRegister LogIn Screen . \n");
          fstream MyFile;
          cout << "\n\n";
          cout << "===========================================================================================\n";
          cout << "| " << setw(25) << left << "Date/Time"
              << "| " << setw(20) << left << "UserName"
              << "| " << setw(20) << left << "Passport"
              << "| " << setw(15) << left << "Permission" << " |" << endl;
          cout << "===========================================================================================\n";


          MyFile.open("LogInFile.txt", ios::in);
          string line;
          if (MyFile.is_open())
          {
              while (getline(MyFile, line))
              {
                  vector<string>vL = ConvertLineToVector(line);
                  if (vL.size() >= 4) { //  √ﬂœ „‰ √‰ Â‰«ﬂ ⁄·Ï «·√ﬁ· 4 ⁄‰«’—
                      cout << "| " << setw(25) << left << vL[0]
                          << "| " << setw(20) << left << vL[1]
                          << "| " << setw(20) << left << vL[2]
                          << "| " << setw(15) << left << vL[3] << " |" << endl;
                      cout << "-------------------------------------------------------------------------------------------\n";
                  }
              }
              MyFile.close();
          }
    }
};

