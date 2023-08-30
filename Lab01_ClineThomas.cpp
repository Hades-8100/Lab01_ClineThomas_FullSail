// Lab01_ClineThomas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{}
#include <iostream>
using namespace std;
int P1()
{

    std::cout << "Please enter your initials.";
    char name[50];
    std::cin >> name;
    std::cout << "Hello " << name << " how old are you?" << std::endl;
    int age;
    std::cin >> age;
    int years = age * 365;
    std::cout << name << " is " << years << " days old.";
    return 0;
}
#include <iostream>
int P2()
{
    return 0;
}