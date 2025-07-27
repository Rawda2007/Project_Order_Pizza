#pragma once
#pragma once
#include<iomanip>;
#include<iostream>
#include<string>
#include "clsString.h"
#include <vector>
#include"clsCurrency.h";
#include <fstream>
#include"clsScreen.h";
#include"clsCalculator.h";
class clsCurrencyScreen:clsScreen
{
private:
	enum enChoose
	{
		List = 1,Find=2,Update=3,Calcuulator=4
	};
	static short _ReadMainMenueOption()
	{
		cout << setw(37) << left << "" << "Choose what do you want to do? [1 to 5]? ";
		short Choice = clsInputValidate::ReadDblNumberBetween(1, 5, "Invailed,Enter Number between 1 to 5? ");
		return Choice;
	}
	static  void _GoBackToMainMenue()
	{
		cout << setw(37) << left << "" << "\n\tPress any key to go back to Main Menue...\n";

		system("pause>0");
		system("cls");
		MainMenu();
	}

	static void _ListScreen()
	{

		clsScreen::_DrawScreenHeader("\t\tList Screen ");
		cout <<setw(8)<<left<<""<< "__________________________________________________________________________________________________\n";
		cout <<setw(8)<<left<<"" << "|" << setw(30) << left << " Country ";
		cout << "|" << setw(10) << left << " Code ";
		cout << "|" << setw(50) << left << " Name ";
		cout << "|" << setw(15) << left << " Rate(1$) \n";
		cout <<setw(8)<<left <<""<< "__________________________________________________________________________________________________\n";

		vector<clsCurrency> vCurrency = clsCurrency::GetAllUSDRates();
		for (clsCurrency& T : vCurrency)
		{
			cout << setw(8)<<left<<""<<"|" << setw(30) << left << T.Country();
			cout << "|" << setw(10) << left << T.CurrencyCode();
			cout << "|" << setw(50) << left << T.CurrencyName();
			cout << "|" << setw(15) << left << T.Rate() << "\n";
		}

		cout << setw(8) << left << "" << "__________________________________________________________________________________________________\n";
	}
	static void _ShowResults(clsCurrency Currency)
	{
		if (!Currency.IsEmpty())
		{
			cout << "\nCurrency Found :-)\n";
			clsCurrency::PrintCurrency(Currency);
		}
		else
		{
			cout << "\nCurrency Was not Found :-(\n";
		}
	}


	static void _FindCurrency()
	{
		_DrawScreenHeader("\t  Find Currency Screen");


		string Name;
		cout << "\n\nFind By : [1] Code or [2] Country ? ";
		int Choose;
		cin >> Choose;
		switch (Choose)
		{
		case 1:
		{
			cout << "\n\nPlease enter Code Name : ";
			cin >> Name;
			
			clsCurrency Currency = clsCurrency::FindByCode(Name);
			_ShowResults(Currency);
			break;
		}
		case 2 :
		{
			cout << "\n\nPlease enter Country Name : ";
			cin >> Name;
			cout << "\n";
			clsCurrency Currency = clsCurrency::FindByCountry(Name);
			_ShowResults(Currency);
			break;

		}
		default:
		{
			system("cls");
			cout << "We do not Understand your choose \n";
			_FindCurrency();
		}
		}
	}
	static void _UpdateCurrency()
	{
		_DrawScreenHeader("\tUpdate Currency Screen");
		string CurrencyCode;
		cout << "Please Enter Currency Code : ";
		cin>> CurrencyCode;
		clsCurrency Currency = clsCurrency::FindByCode(CurrencyCode);
	
		if (!Currency.IsEmpty())
		{
			cout << "\nCurrency Found :-)\n";
			clsCurrency::PrintCurrency(Currency);
		}
		else
		{
			cout << "\nCurrency Was not Found :-(\n";
			return;
		}
		cout << "\nAre you sure want to update the rate of this Currency y/n ? ";
		char answer;
		cin >> answer;
		if (toupper(answer) == 'Y')
		{
			cout << endl;
			cout << "Update Currency Rate : \n";
			cout << "_________________________________\n";
			cout << "Enter New Rate : ";
			float NewCurrency;
			cin >> NewCurrency;
			Currency.UpdateRate(NewCurrency);
			cout << "\nCurrency Rate Updated Successfully :-)\n";

			clsCurrency::PrintCurrency(Currency);
	}
	}
	static void _PerfromMainMenueOption(enChoose Choose)
	{
		switch (Choose)
		{
		case enChoose::List:
		{
			system("cls");
			_ListScreen();
			
			_GoBackToMainMenue();
			
		}
		
		case enChoose::Find:
		{
			
            system("cls");
			_FindCurrency();
		
			_GoBackToMainMenue();
		}
		case enChoose::Update:
		{
			system("cls");
			_UpdateCurrency();
			_GoBackToMainMenue();
		}
		case enChoose::Calcuulator:
		{
			system("cls");
			clsCalculator::Calcurator();
			_GoBackToMainMenue();
		}
		}
	}
public:

	static void MainMenu()
	{
		clsScreen::_DrawScreenHeader("\t\tCurrancy Exchange Main Screen ");
		cout << "\t\t\t===========================================================\n";
		cout << "\t\t\t\t Currency Exchange Menue \n";
		cout << "\t\t\t===========================================================\n";
		cout << " \t\t\t  [1] List Currencies .\n";
		cout << " \t\t\t  [2] Find Currency .\n";
		cout << " \t\t\t  [3] Update Currency .\n";
		cout << " \t\t\t  [4] Currency Calculator .\n";
		cout << " \t\t\t  [5] Main Menu.\n";
		cout << "\t\t\t===========================================================\n";
		_PerfromMainMenueOption(enChoose(_ReadMainMenueOption()));

	}
};

