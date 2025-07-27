#pragma once
#include <iostream>
#include"clsMainScreen.h";
#include"clsInputValidate.h";
#include"clsBankClient.h";

using namespace std;
#include <iomanip>
class clsDeletClient:clsScreen
{
    public:
   static void Delet()
    {
       _DrawScreenHeader("\t\tDelet Client ");
        cout << "Please enter Account Number : ";
        string account;
        account = clsInputValidate::ReadString();
        clsBankClient client = clsBankClient::Find(account);
        
        while (!clsBankClient::IsClientExist(account))
        {
            cout << "try again,enter Account Number : ";
            account = clsInputValidate::ReadString();
            client = clsBankClient::Find(account);
        }
        client.Print();
        cout << "Are you Sure you want to delete this client ? Y,N ? " << endl;
        char answer;
        cin >> answer;
        string Line;
        vector<string>vLine;
        if (toupper(answer) == 'Y')
        {
            fstream MyFile;
            MyFile.open("Clients.txt", ios::in);
            if (MyFile.is_open())
            {
                while (getline(MyFile, Line))
                {
                    vLine.push_back(Line);
                }

                MyFile.close();
                MyFile.open("Clients.txt", ios::out);
                if (MyFile.is_open())
                {
                    for (string c : vLine)
                    {
                        if (c.find(account) == c.npos)
                        {
                            MyFile << c << endl;

                        }
                    }
                    MyFile.close();
                }
            }
            if (!clsBankClient::IsClientExist(account))
            {
                client = clsBankClient::Find(account);
                client.Print();
                cout << " \nClient Deleted Successfully \n";
            }
        }
        else
            cout << "AccountNumber still find .\n";
    }

};

