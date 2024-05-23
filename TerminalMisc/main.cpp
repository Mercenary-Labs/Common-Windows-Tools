#include <iostream>
#include <cstdlib>
#include <Windows.h>


std::string Terms;
std::string Option;

class Usage
{
    public:
            void Ping()
            {
                std::string IP;
                std::string PingSetup = "ping ";

                std::cout << "please enter the ip or website you would like to ping.\n\n";
                std::cin >> IP;

                std::string PingAndInput = PingSetup + IP;

                system(PingAndInput.c_str());
            }
};
Usage Basic;

void Program()
{


    std::cout << "Hello welcome to Mercenary Labs general purpose tools.\n";
    std::cout << "What would you like to use?\n\n";

    std::cin >> Option;

    if(Option == "ping")
    {
        Basic.Ping();
    } else {
        std::cout << "no option inputed please try again.\n\n";
    }
}

int main()
{
    std::string Terms;

    std::cout << "Do you accept the terms and conditions? (yes/no)\n";
    std::cin >> Terms;

    if (Terms == "yes") {
        Program();
    } else {
        std::cout << "You did not accept the terms and conditions.\n";
    }
}  
//made by MHz