#pragma once
#include <iostream>
#include"clsMainScreen.h";

#include"clsBankClient.h";

using namespace std;
#include <iomanip>

class clsClientList:clsScreen
{
public:
    static  void _ShowAllClientsScreen()
    {
       
        _DrawScreenHeader("\t\tList Client(s)");
        int sum;
        vector<clsBankClient>vClient = clsBankClient::GetClientList();
        cout << "\n\n\t\t\t\t\tClient List (" << vClient.size() << ") Client(s) \n\n";
        cout << string(116, '_') << endl;
        cout << "\n|" << left << setw(15) << "Account Number " << "|" << left << setw(25) << "Client Name " << "|" << left << setw(15) << "Phone " <<
            "|" << left << setw(25) << "Email " << "|" << left << setw(15) << "Pin Code" << "|" << left << setw(15) << "Account Balance " << endl;
        cout << string(116, '_') << endl << endl;
        if (vClient.empty()) {
            cout << "\n\nNo clients found!\n";
            return;
        }

        for (clsBankClient c : vClient)
        {
            cout << "|" << left << setw(15) << c.AccountNumber() << "|" << left << setw(25) << c.FullName() << "|" << left << setw(15) << c.Phone <<
                "|" << left << setw(25) << c.Email << "|" << left << setw(15) << c.PinCode << "|" << left << setw(15) << c.AccountBalance << endl;
        }

        cout << endl << string(116, '_') << endl;



    }

};

