#pragma once
#include <iostream>
#include"clsMainScreen.h";
#include"clsInputValidate.h";
#include"clsBankClient.h";

using namespace std;
#include <iomanip>
class clsAddClient:clsScreen
{
private:
   static void ReadClientInfo(clsBankClient& Client,string Account)
   {
       Client.GetAccount(Account);
       cout << "\nEnter FirstName: ";
       Client.FirstName = clsInputValidate::ReadString();

       cout << "\nEnter LastName: ";
       Client.LastName = clsInputValidate::ReadString();

       cout << "\nEnter Email: ";
       Client.Email = clsInputValidate::ReadString();

       cout << "\nEnter Phone: ";
       Client.Phone = clsInputValidate::ReadString();

       cout << "\nEnter PinCode: ";
       Client.PinCode = clsInputValidate::ReadString();

       cout << "\nEnter Account Balance: ";
       Client.AccountBalance = clsInputValidate::ReadFloatNumber();
   }

public:
  static  void AddClient()
    {  
      _DrawScreenHeader("\t\tAdd Client ");
        string Account;
        cout << "enter AccountNumber : ";
        Account = clsInputValidate::ReadString();
        while (clsBankClient::IsClientExist(Account))
        {
            cout << "Account is found,try again enter AccountNumber : ";
            Account = clsInputValidate::ReadString();

        }

      clsBankClient NewClient;
        
        
      ReadClientInfo(NewClient,Account);
        string sperate = "#//#";
        string line = NewClient.FirstName + sperate + NewClient.LastName + sperate + NewClient.Email + sperate +
            NewClient.Phone + sperate + sperate + NewClient.PinCode + sperate + to_string(NewClient.AccountBalance);
        fstream MyFile;
        MyFile.open("Clients.txt", ios::app);
        if (MyFile.is_open())
        {
            MyFile <<line << endl;
            MyFile.close();
        }
        cout << "succfully \n";
    }
};

