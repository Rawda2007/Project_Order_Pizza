#pragma once
#include<iostream>
#include<string>
#include "clsString.h"
#include <vector>
#include <fstream>
#include"clsScreen.h";
#include"clsCurrency.h";
class clsCalculator:clsScreen
{
private:
	static clsCurrency _InputInfo(int NumCurrency)
	{
		string CurrencyCode;
		
		cout << "Please enter Currenncy" << NumCurrency << " Code : ";
		cin >> CurrencyCode;
clsCurrency Currency=clsCurrency::FindByCode(CurrencyCode);
		while (Currency.IsEmpty())
		{
			cout << "Curreny do not found ,";
			cout << "Please enter Currenncy" << NumCurrency << " Code : ";
			cin >> CurrencyCode;
			 Currency = clsCurrency::FindByCode(CurrencyCode);
		}
		return  Currency;
	}
	static float AmountConvertTo()
	{
		float AmountConvert;
		cout << "please Enter to Exchange : ";
		cin >> AmountConvert;
		return AmountConvert;
	}
	static void ConvertToUSD(float amount,clsCurrency Currency)
	{
		float convert = amount / Currency.Rate();
		cout << amount << " " << Currency.CurrencyCode() << "= " << convert << " " << "USD \n\n";
	}
	static void ResultConvert(clsCurrency Currency1,float Amount ,clsCurrency Currency2)
	{
		float Convert = (Currency2.Rate() * Amount) / Currency1.Rate();
		cout << "\n" << Amount << " " << Currency1.CurrencyCode() << " =" << Convert << " " << Currency2.CurrencyCode() << endl;
	}
	static void DoYouAgainOperation()
	{
		char Answer;
		cout << "Do you want to perfrom anthor Calculation ? y/n ? ";
		cin >> Answer;
		if (toupper(Answer) == 'Y')
		{
			system("cls");
			Calcurator();
		}
	}
public:

	static void Calcurator()
	{
		_DrawScreenHeader("\t\t\tCurrency Calculator Screen ");
		clsCurrency Currency1 = _InputInfo(1);
		cout << endl;
		clsCurrency Currency2=_InputInfo(2);
		cout << endl;
		float AmountConvert=AmountConvertTo();

		cout << "\nConvert From : \n";
		clsCurrency::PrintCurrency(Currency1);
		cout << endl;
		ConvertToUSD(AmountConvert, Currency1);
		if(Currency2.CurrencyCode()!="USD")
		{ 
			if (Currency1.CurrencyCode()==Currency2.CurrencyCode())
			{
				cout << "Currency1 and Currency2 is the Same . \n";
				cout << AmountConvert << " " << Currency1.CurrencyCode() << " = " << AmountConvert << " " << Currency2.CurrencyCode() << endl;
			}
			else
			{ 
		cout << "\n TO : \n";
		clsCurrency::PrintCurrency(Currency2);
		cout << endl;
		ResultConvert(Currency1, AmountConvert, Currency2);
	}
		} 
		DoYouAgainOperation();
	
	}
};

