#pragma once
#include <iostream>
#include"clsMainScreen.h";
#include"clsInputValidate.h";
#include"clsBankClient.h";

using namespace std;
#include <iomanip>
class clsFindClient:clsScreen
{
public:
	static void FindClient()
	{ 
	_DrawScreenHeader("\t\t ");
   
    string AccountNumber = "";

    cout << "\nPlease Enter client Account Number: ";
    AccountNumber = clsInputValidate::ReadString();

    while (!clsBankClient::IsClientExist(AccountNumber))
    {
        cout << "\nAccount number is not found, choose another one: ";
        AccountNumber = clsInputValidate::ReadString();
    }

    clsBankClient Client1 = clsBankClient::Find(AccountNumber);
    Client1.Print();
	}
};

