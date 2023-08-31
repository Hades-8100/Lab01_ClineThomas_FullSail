// Lab01_ClineThomas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <conio.h>
using namespace std;
//#define USHRT_MAX 32767

#define SHRT_MIN 0
#define SHRT_MAX 32767
#define INT_MIN 0
#define INT_MAX 2147483647
#define LONG_MIN 0
#define LONG_MAX 9223372036854775807
int ValidateIntInput()

{

    int input;

    bool good = false;

    while (true)

    {

        std::cout << "Input; number: ";

        if (std::cin >> input)

        {

            good = true;

        }

        std::cin.clear();

        std::cin.ignore(INT_MAX, '\n');

        if (good) return input;

    }

}
//void pause()
//{
//    cout << pause;
//    
//}
void programone()
//int first()
{
//
   std::cout << "Please enter your initials.";
    char name[50];
    std::cin >> name;
    std::cout << "Hello " << name << " how old are you?" << std::endl;
    int age;
    std::cin >> age;
    int years = age * 365;
    std::cout << name << " is " << years << " days old.";
    cout << "Press enter to clear the console...";
    _getch();

    system("cls");
//    return 0;
}
void programtwo()

{
        int arr[5];
        for (int i = 0; i < 5; i++) {
            bool valid = false;
            while (!valid) {
                std::cout << "Enter a number for slot " << i << ": ";
                if (std::cin >> arr[i]) {
                    valid = true;
                }
                else {
                    std::cout << "Invalid input. Please enter a number." << std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
            }
        }
        std::cout << "The inputs are: ";
        for (int i = 0; i < 5; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;

        cout << "Press enter to clear the console...";
        _getch();

        system("cls");
}
void programthree()

{
    int a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;

    int result1 = a + 1 * b + 2 - c;
    int result2 = (a + 1) * (b + 2) - c;

    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;
    cout << "Press enter to clear the console...";
    _getch();

    system("cls");
}
void programfour()
{
    cout << "Minimum and maximum values of integral variable types:\n";
    cout << "short: " << SHRT_MIN << " to " << SHRT_MAX << endl;
    cout << "int: " << INT_MIN << " to " << INT_MAX << endl;
    cout << "long: " << LONG_MIN << " to " << LONG_MAX << endl;
    cout << "unsigned short: 0 to " << USHRT_MAX << endl;
    cout << "unsigned int: 0 to " << UINT_MAX << endl;
    cout << "unsigned long: 0 to " << ULONG_MAX << endl;
    cout << "Press enter to clear the console...";
    _getch();

    system("cls");
}
void programfive()
{
    char name[32];
    cout << "Enter your full name: ";
    cin >> name;

    cout << "Your name is " << name << endl;
    cout << "Did you know that last names were once used to tell what job you did?" << endl;
    cout << "Press enter to clear the console...";
    _getch();

    system("cls");
}
void programsix()
{
    int age;
    cout << "How old are you? ";
    cin >> age;

    if (age < 16) {
        cout << "I'm sorry, but you're too young to play this game. Bye!" << endl;
    }
    else if (age >= 16 && age < 25) {
        cout << "You're still young! Enjoy your life." << endl;
    }
    else if (age >= 25 && age < 50) {
        cout << "You're a quarter of a century old! Your life is slowly slipping away." << endl;
    }
    else if (age >= 50 && age < 100) {
        cout << "You're getting up there in years. Better start planning for retirement!" << endl;
    }
    else {
        cout << "Wow! You're over 100 years old! You must have some great stories to tell." << endl;
    }
    cout << "Press enter to clear the console...";
    _getch();

    system("cls");
}
void programseven()
{

}
void programeight()
{

}
void programnine()
{

}
void programten()
{

}
int main()
{
   // programone();
    
   // programtwo();
    
    //programthree();
    
  // programfour();
    
    //programfive();
    programsix();
    // pause();
    //programseven();
    // pause();
    //programeight();
    // pause();
    //programnine();
    // pause();
    //programten();
    //pause();
       /* return 0;*/
}

//void programone()
//{
//   /* int first()
//    {*/
//
//        std::cout << "Please enter your initials.";
//        char name[50];
//        std::cin >> name;
//        std::cout << "Hello " << name << " how old are you?" << std::endl;
//        int age;
//        std::cin >> age;
//        int years = age * 365;
//        std::cout << name << " is " << years << " days old.";
//        
//    /*}*/
//}
