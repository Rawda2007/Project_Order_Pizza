//ProgrammingAdivces.com
//Mohammed Abu-Hadhoud

#pragma once
#include <iostream>
#include <string>
#include "clsString.h"
#include "clsDate.h"

class clsInputValidate
{
	
public:

	static bool IsNumberBetween(short Number, short From, short To)
	{
		if (Number >= From && Number <= To)
			return true;
		else
			return false;
	}

	static bool IsNumberBetween(int Number, int From, int To)
	{
		if (Number >= From && Number <= To)
			return true;
		else
			return false;

	}



	static bool IsNumberBetween(double Number, double From, double To)
	{
		if (Number >= From && Number <= To)
			return true;
		else
			return false;
	}

	static bool IsDateBetween(clsDate Date, clsDate From, clsDate To)
	{
		//Date>=From && Date<=To
		if ((clsDate::IsDate1AfterDate2(Date, From) || clsDate::IsDate1EqualDate2(Date, From))
			&&
			(clsDate::IsDate1BeforeDate2(Date, To) || clsDate::IsDate1EqualDate2(Date, To))
			)
		{
			return true;
		}

		//Date>=To && Date<=From
		if ((clsDate::IsDate1AfterDate2(Date, To) || clsDate::IsDate1EqualDate2(Date, To))
			&&
			(clsDate::IsDate1BeforeDate2(Date, From) || clsDate::IsDate1EqualDate2(Date, From))
			)
		{
			return true;
		}

		return false;
	}

	static int ReadIntNumber(string ErrorMessage = "Invalid Number, Enter again\n")
	{
		int Number;
		while (!(cin >> Number)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage;
		}
		return Number;
	}

	static int ReadIntNumberBetween(int From, int To, string ErrorMessage = "Number is not within range, Enter again:\n")
	{
		int Number = ReadIntNumber();

		while (!IsNumberBetween(Number, From, To))
		{
			cout << ErrorMessage;
			Number = ReadIntNumber();
		}
		return Number;
	}

	static double ReadFloatNumber(string ErrorMessage = "Invalid Number, Enter again\n")
	{
		float Number;
		while (!(cin >> Number)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage;
		}
		return Number;
	}

	static double ReadFloatNumberBetween(double From, double To, string ErrorMessage = "Number is not within range, Enter again:\n")
	{
		float Number = ReadFloatNumber();

		while (!IsNumberBetween(Number, From, To)) {
			cout << ErrorMessage;
			Number = ReadDblNumber();
		}
		return Number;
	}

	static double ReadDblNumber(string ErrorMessage = "Invalid Number, Enter again\n")
	{
		double Number;
		while (!(cin >> Number)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage;
		}
		return Number;
	}

	static double ReadDblNumberBetween(double From, double To, string ErrorMessage = "Number is not within range, Enter again:\n")
	{
		double Number = ReadDblNumber();

		while (!IsNumberBetween(Number, From, To)) {
			cout << ErrorMessage;
			Number = ReadDblNumber();
		}
		return Number;
	}

	static bool IsValideDate(clsDate Date)
	{
		return	clsDate::IsValidDate(Date);
	}

	static string ReadString()
	{
		string  S1 = "";
		// Usage of std::ws will extract allthe whitespace character
		getline(cin >> ws, S1);
		return S1;
	}
	static string convert(int num)
	{
		string text;
		if (num >= 0 && num <= 19)
		{
			string arr[] = { "","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twenty","thirteen","fourteen","fifteen","sixten","seventen","eighteen","nineteen" };
			return (arr[num]);
		}
		if (num >= 20 && num <= 100)
		{
			int num1 = ceil(num / 10);
			switch (num1)
			{
			case 2:
				text = "twenty";
				break;
			case 3:
				text = "thirty";
				break;
			case 4:
				text = "forty";
				break;
			case 5:
				text = "fifty";
				break;
			case 6:
				text = "sixty";
				break;
			case 7:
				text = "seventy";
				break;
			case 8:
				text = "eighty";
				break;
			case 9:
				text = "ninty";
				break;
			case 10:
				text = "hundred ";
				break;
			defult:
				text = "";

			}
			return(text + " " + convert(num % 10));
		}
		if (num >= 100 && num < 1000)
		{
			return(convert(num / 100) + " " + "hundered" + " " + convert(num % 100));
		}
		if (num >= 1000 && num < 1000000)
		{
			return(convert(num / 1000) + " " + "thousand" + " " + convert(num % 1000));
		}
		if (num >= 1000000 && num < 1000000000)
		{
			return(convert(num / 1000000) + " " + "million" + " " + convert(num % 1000000));
		}
		if (num >= 1000000000 && num < 100000000000)
		{
			//num=250
			return(convert(num / 1000000000) + " " + "billion" + " " + convert(num % 1000000000));
		}
	}
};

