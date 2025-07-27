#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsInputValidate.h"
#include <iomanip>
#include"clsClientList.h";
#include"clsAddClient.h";
#include"clsDeletClient.h";
#include"clsUpdateClient.h";
#include"clsFindClient.h";
#include"clsTransactions.h";
#include"clsManageUsers.h";
#include"Global.h";
#include"clslogInFile.h";
#include"clsCurrencyScreen.h";
using namespace std;

class clsMainScreen :protected clsScreen
{


private:
   
    enum enMainMenueOptions {
        eListClients = 1, eAddNewClient = 2, eDeleteClient = 3,
        eUpdateClient = 4, eFindClient = 5, eShowTransactionsMenue = 6,
        eManageUsers = 7,Register=8 ,Currency=9,eExit = 10
    };

    static short _ReadMainMenueOption()
    {
        cout << setw(37) << left << "" << "Choose what do you want to do? [1 to 10]? ";
        short Choice = clsInputValidate::ReadDblNumberBetween(1, 10, "Invailed,Enter Number between 1 to 10? ");
        return Choice;
    }

    static  void _GoBackToMainMenue()
    {
        cout << setw(37) << left << "" << "\n\tPress any key to go back to Main Menue...\n";

        system("pause>0");
        ShowMainMenue();
    }

    static void _ShowAddNewClientsScreen()
    {
       // cout << "\nAdd New Client Screen Will be here...\n";

        clsAddClient::AddClient();
    }

    static void _ShowDeleteClientScreen()
    {
       // cout << "\nDelete Client Screen Will be here...\n";
        clsDeletClient::Delet();
    }

    static void _ShowUpdateClientScreen()
    {
        //cout << "\nUpdate Client Screen Will be here...\n";
        clsUpdateClient::UpdateClient();
    }

    static void _ShowFindClientScreen()
    {
       // cout << "\nFind Client Screen Will be here...\n";
        clsFindClient::FindClient();
    }

    static void _ShowTransactionsMenue()
    {
        //cout << "\nTransactions Menue Will be here...\n";
        clsTransactions::ShowTransactionsMenue();
    }

    static void _ShowManageUsersMenue()
    {
      //  cout << "\nUsers Menue Will be here...\n";
        clsManageUsers::ShowManageUsersMenue();
    }

    static void _ShowEndScreen()
    {
     //   cout << "\nEnd Screen Will be here...\n";

        CurrentUser = clsUser::Find("", "");
    }

    static void _PerfromMainMenueOption(enMainMenueOptions MainMenueOption)
    {
        switch (MainMenueOption)
        {
        case enMainMenueOptions::eListClients:
        {
            system("cls");
           
           clsClientList:: _ShowAllClientsScreen();
            _GoBackToMainMenue();
            break;
        }
        case enMainMenueOptions::eAddNewClient:
            system("cls");
            

            _ShowAddNewClientsScreen();
            _GoBackToMainMenue();
            break;

        case enMainMenueOptions::eDeleteClient:
            system("cls");
            
            
            _ShowDeleteClientScreen();
            _GoBackToMainMenue();
            break;

        case enMainMenueOptions::eUpdateClient:
            system("cls");
            _ShowUpdateClientScreen();
            _GoBackToMainMenue();
            break;

        case enMainMenueOptions::eFindClient:
            system("cls");
            _ShowFindClientScreen();
            _GoBackToMainMenue();
            break;

        case enMainMenueOptions::eShowTransactionsMenue:
            system("cls");
            _ShowTransactionsMenue();
            ShowMainMenue();

            break;

        case enMainMenueOptions::eManageUsers:
            system("cls");
            _ShowManageUsersMenue();
            ShowMainMenue();
            break;
        case enMainMenueOptions::Register:
            system("cls");
            clslogInFile::PrintUsersLogIn();
            cout << "\n\nPress any key to go back to Manage Users Menue...";
            system("pause>0");
            ShowMainMenue();
            break;
        case enMainMenueOptions::Currency:
            system("cls");
            clsCurrencyScreen::MainMenu();
            ShowMainMenue();
            break;
        case enMainMenueOptions::eExit:
            system("cls");
            _ShowEndScreen();
            
            break;
        }

    }



public:


    static void ShowMainMenue()
    {
        
            system("cls");
            _DrawScreenHeader("\t\tMain Screen");
            
            cout << setw(37) << left << "" << "===========================================\n";
            cout << setw(37) << left << "" << "\t\t\tMain Menue\n";
            cout << setw(37) << left << "" << "===========================================\n";

            cout << setw(37) << left << "" << "\t[1] Show Client List.\n";
            cout << setw(37) << left << "" << "\t[2] Add New Client.\n";
            cout << setw(37) << left << "" << "\t[3] Delete Client.\n";
            cout << setw(37) << left << "" << "\t[4] Update Client Info.\n";
            cout << setw(37) << left << "" << "\t[5] Find Client.\n";
            cout << setw(37) << left << "" << "\t[6] Transactions.\n";
            cout << setw(37) << left << "" << "\t[7] Manage Users.\n";
            cout << setw(37) << left << "" << "\t[8] Register LogIn.\n";
            cout << setw(37) << left << "" << "\t[9] Currensy Exchange . \n";
            cout << setw(37) << left << "" << "\t[10] Logout.\n";
            cout << setw(37) << left << "" << "===========================================\n";

            _PerfromMainMenueOption((enMainMenueOptions)_ReadMainMenueOption());
        
}
};

