// Lab01_ClineThomas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
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
int main()
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

    return 0;
}
