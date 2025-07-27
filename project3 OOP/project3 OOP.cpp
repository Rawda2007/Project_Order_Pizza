#include <iostream>
#include "clsBankClient.h"
#include "clsInputValidate.h"
#include<iomanip>;
#include"clsMainScreen.h";
#include"clsLogIn.h";

int main()

{
    //clsMainScreen::ShowMainMenue();
   //عشان يعيد الدايره تاني لما يعمل لوج اوت

while(true)
{
    clsLogIn::LogIn();
}
   // system("pause>0");
    return 0;
    //exit(0);
}