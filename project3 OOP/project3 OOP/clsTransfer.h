#pragma once
#include <iostream>
using namespace std;
#include"clsScreen.h";
#include"clsBankClient.h";
#include"clsInputValidate.h";
#include"clsUser.h";
#include<string>
class clsTransfer:clsScreen
{
private:
	static void PrintClient(clsBankClient &Client)
	{
		cout << "Client Card : \n";
		cout<<"_____________________________________\n";
		cout << "FullName : " << Client.FullName() << endl;
		cout << "Account Number : " << Client.AccountNumber() << endl;
		cout << "Balance : " << Client.AccountBalance << endl;
		cout << "_____________________________________\n";

	}
	static string date(clsBankClient &client)
	{
		//Mazem#//#Kareem#//#Mazin@gmail.com#//#898234#//#A106#//#1234#//#8002.000000
			string sword = "#//#";
			string Line = client.FirstName + sword + client.LastName + sword + client.Email + sword + client.Phone + sword + client.AccountNumber()
				+ sword + client.PinCode + sword + to_string(client.AccountBalance);
			return Line;
	}
	static void UpdateFile(vector<string>vLine)
	{ 
		fstream MyFile;
		// › Õ «·„·› ··ﬂ «»… („”Õ «·„Õ ÊÏ «·ﬁœÌ„)
		MyFile.open("Client.txt", ios::out | ios::trunc);
		if (!MyFile.is_open())
		{
			cout << "Error: Unable to open file for writing.\n";
			return;
		}

		for (const string& Word : vLine)
		{
			MyFile << Word << endl;
		}

		MyFile.close();
		cout << "Transfer completed successfully!\n";



	}
static void edit(clsBankClient& To, clsBankClient& From, int Amount)
{
	
    fstream MyFile;
    vector<string> vLine;
    string Line;
	string sword = "#//#";
    // › Õ «·„·› ··ﬁ—«¡…
    MyFile.open("Clients.txt", ios::in);
   
    
	 if (MyFile.is_open())
    {
	while (getline(MyFile, Line))
	{
		vector<string>vL = ConvertLineToVector(Line);
		for (string& word : vL)
		{
			if (word == To.AccountNumber())
			{
				To.AccountBalance += Amount;
				Line = date(To);
				cout << "To.AccountBalance = " << To.AccountBalance << endl;
			
			}
			if (word == From.AccountNumber())
			{
				From.AccountBalance -= Amount;
				Line = date(From);
				cout << "From.AccountBalance = " << To.AccountBalance << endl;

			}
			
		}
		vLine.push_back(Line);
		}
	 }
	 MyFile.close();
	  UpdateFile(vLine);

	  
 
		
	
}
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



	return(to_string(hour) + ":" + to_string(minute) + ":" + to_string(second));

}
static string LineInFile(clsBankClient& To, clsBankClient& From, int Amount)
{
	string sword = "#//#";
	return(Date() + "_" + Time() + sword +From.AccountNumber()+sword+To.AccountNumber()+sword+to_string(Amount)+ sword+to_string(From.AccountBalance)+sword+
		to_string(To.AccountBalance)+sword+ CurrentUser.UserName);
}
static void TransferLog(clsBankClient& To, clsBankClient& From, int Amount)
{
	
	fstream MyFile;
	string Line;
	MyFile.open("TransferLog.txt", ios::app);
		if (MyFile.is_open())
		{
			MyFile << LineInFile(To, From, Amount)<<endl;
			MyFile.close();
		}
}
	/*void edit(clsBankClient& To, clsBankClient& From, int Amount) {
		fstream MyFile;
		vector<string> vLine;
		string Line;

		// › Õ «·„·› ··ﬁ—«¡…
		MyFile.open("Client.txt", ios::in);
		if (!MyFile.is_open()) {
			cout << "Error: Unable to open file for reading.\n";
			return;
		}

		while (getline(MyFile, Line)) {
			if (Line.find(To.AccountNumber()) != string::npos) {
				//  ÕœÌÀ «·„” ·„
				To.AccountBalance += Amount;
				vLine.push_back(To.ToString());
			}
			else if (Line.find(From.AccountNumber() )!= string::npos) {
				//  ÕœÌÀ «·„—”·
				From.AccountBalance -= Amount;
				vLine.push_back(From.ToString());
			}
			else {
				// ≈»ﬁ«¡ «·”ÿÊ— «·√Œ—Ï »œÊ‰  €ÌÌ—
				vLine.push_back(Line);
			}
		}
		MyFile.close();

		// › Õ «·„·› ··ﬂ «»…
		MyFile.open("Client.txt", ios::out | ios::trunc);
		if (!MyFile.is_open()) {
			cout << "Error: Unable to open file for writing.\n";
			return;
		}

		for (const string& Word : vLine) {
			MyFile << Word << endl;
		}

		MyFile.close();
		cout << "Transfer completed successfully!\n";
	}*/
static vector<string> ConvertLineToVector(string line, string sword = "#//#")
{
	vector<string>vLine = clsString::Split(line, sword);
	if (vLine.size() ==7)
		return vLine;
}
public:
	static void Transfer()
	{
		_DrawScreenHeader("\t\t Transfer.");
		string From, To;
		cout << "Please Enter Account Number to Transfer From :  ";
		cin >> From;
		
		clsBankClient client = clsBankClient::Find(From);
		while (!clsBankClient::IsClientExist(From))
		{
			cout << "try again,enter Account Number : ";
			From= clsInputValidate::ReadString();
			client = clsBankClient::Find(From);
		}
		cout << "\n\n";
		PrintClient(client);
		cout << "\n\n";
		cout << "Please Enter Account Number to Transfer To :  ";
		cin >> To;
		cout << "\n\n";
		clsBankClient Client = clsBankClient::Find(To);

		while (!clsBankClient::IsClientExist(To)||To==From)
		{
			cout << "try again,enter Account Number : ";
		To = clsInputValidate::ReadString();
			Client = clsBankClient::Find(To);
		}
		cout << "\n\n";
		PrintClient(Client);
		cout << "\n\n";
		int Amount;
		cout << "Enter Transfer Amount : ";
		cin >> Amount;
		while (Amount > client.AccountBalance&&Amount<0)
		{
			cout << "Amount Exceeds the available Balance , Enter anthor Amount : ";
			cin >> Amount;
		}
		cout << "\n\n";
		
		cout << "Are you sure you want to perform this operation ? Y,N ? ";
		char A;
		cin >> A;
		if (toupper(A) == 'Y')
		{
			edit(Client, client,Amount);
			
			PrintClient(client);
			PrintClient(Client);
			TransferLog(Client, client, Amount);
		}
	}
	static void TransferLogList()
	{
		_DrawScreenHeader("\t\tRegister LogIn Screen . \n");
		fstream MyFile;
		cout << "\n\n";
		cout << "=========================================================================================================================================================================\n";
		cout << "| " << setw(25) << left << "Date/Time"
			<< "| " << setw(20) << left << "S.Acc"
			<< "| " << setw(20) << left << "D.Acc"
			<< "| " << setw(15) << left << "Amount" 
			<< "| " << setw(20) << left << "S.Balance"
			<< "| " << setw(20) << left << "D.Balance"
			<< "| " << setw(20) << left << "User " << endl;

		cout << "=========================================================================================================================================================================\n";


		MyFile.open("TransferLog.txt", ios::in);
		string line;
		if (MyFile.is_open())
		{
			while (getline(MyFile, line))
			{
				vector<string>vL = ConvertLineToVector(line);
				if (vL.size() >= 7) { //  √ﬂœ „‰ √‰ Â‰«ﬂ ⁄·Ï «·√ﬁ· 4 ⁄‰«’—
					cout << "| " << setw(25) << left << vL[0]
						<< "| " << setw(20) << left << vL[1]
						<< "| " << setw(20) << left << vL[2]
						<< "| " << setw(15) << left << vL[3] 
					<< "| " << setw(15) << left << vL[4] << " |" 
					 << setw(15) << left << vL[5] << " |" 
					<< setw(15) << left << vL[6] << " |" << endl;

		cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				}
			}
			MyFile.close();
		}
	}
};

