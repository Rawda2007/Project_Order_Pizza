#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsInputValidate.h"
#include <iomanip>
#include"clsTransfer.h";
using namespace std;

class clsTransactions:protected clsScreen
{


private:
    enum enTransactionsMenueOptions {
        eDeposit = 1, eWithdraw = 2,
        eShowTotalBalance = 3,Transfers=4,TransferLog=5, eShowMainMenue = 6
    };
    static string _ConverClientObjectToLine(clsBankClient Client, string Seperator = "#//#")
    {

        string stClientRecord = "";
        stClientRecord += Client.FirstName + Seperator;
        stClientRecord += Client.LastName + Seperator;
        stClientRecord += Client.Email + Seperator;
        stClientRecord += Client.Phone + Seperator;
        stClientRecord += Client.AccountNumber() + Seperator;
        stClientRecord += Client.PinCode + Seperator;
        stClientRecord += to_string(Client.AccountBalance);

        return stClientRecord;

    }
    static short ReadTransactionsMenueOption()
    {
        cout << setw(37) << left << "" << "Choose what do you want to do? [1 to 6]? ";
        short Choice = clsInputValidate::ReadDblNumberBetween(1, 6, "Invailed Number,Enter Number between 1 to 6? ");
        return Choice;
    }


    static void _ShowDepositScreen()
    {
        // cout << "\n Deposit Screen will be here.\n";
        _DrawScreenHeader("\t\tDeposit ");
        string Account;
        cout << "Enter your Account Number : ";
        cin >> Account;
        while (!clsBankClient::IsClientExist(Account))
        {
            cout << "Account is found,try again enter AccountNumber : ";
            Account = clsInputValidate::ReadString();

        }
        vector<clsBankClient>vClient = clsBankClient::GetClientList();
        
        clsBankClient client= clsBankClient::Find(Account);
 client.Print(); 
 int num;
        fstream MyFile;
        MyFile.open("Clients.txt", ios::out);
            if(MyFile.is_open())
        { 
                for(clsBankClient &c:vClient )
                { 
                    if (c.AccountNumber() == Account)
                    {
                       
                      
                        cout << "\nYour Balance in Your Account = " << c.AccountBalance << ".\n";
                        cout << "How much do you deposit ? \n";
                       
                        cin >> num;
                        c.AccountBalance += num;
                    }
                  MyFile<<  _ConverClientObjectToLine(c)<<endl;
                }
                client.AccountBalance += num;
                client.Print();
            cout << "Successfully \n";
            MyFile.close();
        }
    }
    static void _ShowWithdrawScreen()
    {
       // cout << "\n Withdraw Screen will be here.\n";
        _DrawScreenHeader("\t\tDeposit ");
        string Account;
        cout << "Enter your Account Number : ";
        cin >> Account;
        while (!clsBankClient::IsClientExist(Account))
        {
            cout << "Account is found,try again enter AccountNumber : ";
            Account = clsInputValidate::ReadString();

        }
        vector<clsBankClient>vClient = clsBankClient::GetClientList();

        clsBankClient client = clsBankClient::Find(Account);
        client.Print();
        int num;
        fstream MyFile;
        MyFile.open("Clients.txt", ios::out);
        if (MyFile.is_open())
        {
            for (clsBankClient& c : vClient)
            {
                if (c.AccountNumber() == Account)
                {


                    cout << "\nYour Balance in Your Account = " << c.AccountBalance << ".\n";
                    cout << "How much do you deposit ? \n";

                    cin >> num;
                    while (num > c.AccountBalance)
                    {
                        cout << "Invailed,You only have " << c.AccountBalance << ",You cannot withdraw more than this amount.\n ";
                        cout << "How much do you deposit ? \n";

                        cin >> num;
                    }
                    c.AccountBalance -= num;
                }
                MyFile << _ConverClientObjectToLine(c) << endl;
            }
            client.AccountBalance -= num;
            client.Print();
            cout << "Successfully \n";
            MyFile.close();
        }
    }

    static void _ShowTotalBalancesScreen()
    {
       // cout << "\n Balances Screen will be here.\n";
        
            int sum = 0;
            vector<clsBankClient>vClient = clsBankClient::GetClientList();
            cout << "\t\t\tClient List (" << vClient.size() << ") Client(s) \n\n";
            cout << string(58, '_') << endl;
            cout << "\n|" << left << setw(15) << "Account Number " << "|" << left << setw(25) << "Client Name "
                << "|" << left << setw(15) << "Account Balance " << endl;
            cout << string(58, '-') << endl << endl;
            for (clsBankClient c : vClient)
            {
                cout << "|" << left << setw(15) << c.AccountNumber() << "|" << left << setw(25) << c.FullName()
                    << "|" << left << setw(15) << c.AccountBalance << endl;
                sum += c.AccountBalance;
            }

            cout << string(58, '_') << endl;
            cout << "\t\tTotal Balance = " << sum << endl;
            cout << "\t\t" << clsInputValidate::convert(sum) << endl;
        
    }

    static void _GoBackToTransactionsMenue()
    {
        cout << "\n\nPress any key to go back to Transactions Menue...";
        system("pause>0");
        ShowTransactionsMenue();

    }

    static void _PerformTransactionsMenueOption(enTransactionsMenueOptions TransactionsMenueOption)
    {
        switch (TransactionsMenueOption)
        {
        case enTransactionsMenueOptions::eDeposit:
        {
            system("cls");
            _ShowDepositScreen();
            _GoBackToTransactionsMenue();
            break;
        }

        case enTransactionsMenueOptions::eWithdraw:
        {
            system("cls");
            _ShowWithdrawScreen();
            _GoBackToTransactionsMenue();
            break;
        }

        case enTransactionsMenueOptions::eShowTotalBalance:
        {
            system("cls");
            _ShowTotalBalancesScreen();
            _GoBackToTransactionsMenue();
            break;
        }

        case enTransactionsMenueOptions::Transfers:
        {
             system("cls");
             clsTransfer::Transfer();
            _GoBackToTransactionsMenue();
            break;
        }
        case enTransactionsMenueOptions::TransferLog:
        {
            system("cls");
            clsTransfer::TransferLogList();
            _GoBackToTransactionsMenue();
            break;
        }
        case enTransactionsMenueOptions::eShowMainMenue:
        {
            //do nothing here the main screen will handle it :-) ;
        }
        }


    }



public:


    static void ShowTransactionsMenue()
    {


        system("cls");
        _DrawScreenHeader("\t  Transactions Screen");

        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\t\t  Transactions Menue\n";
        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\t[1] Deposit.\n";
        cout << setw(37) << left << "" << "\t[2] Withdraw.\n";
        cout << setw(37) << left << "" << "\t[3] Total Balances.\n";
        cout << setw(37) << left << "" << "\t[4] Tranfer.\n";
        cout << setw(37) << left << "" << "\t[5] Tranfer Log.\n";

        cout << setw(37) << left << "" << "\t[6] Main Menue.\n";
        cout << setw(37) << left << "" << "===========================================\n";

        _PerformTransactionsMenueOption((enTransactionsMenueOptions)ReadTransactionsMenueOption());
    }

};

