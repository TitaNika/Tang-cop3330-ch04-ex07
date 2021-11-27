/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tony Tang
 */

#include "std_lib_facilities.h"

vector<string> number;

void init_vector()
{
    number.push_back("Zero");
    number.push_back("One");
    number.push_back("Two");
    number.push_back("Three");
    number.push_back("Four");
    number.push_back("Five");
    number.push_back("Six");
    number.push_back("Seven");
    number.push_back("Eight");
    number.push_back("Nine");
}

int grab_num()
{
    int input = 0; 

    if (cin >> input)

        return input;

    cin.clear();

    string inputs;

    cin >> inputs;

    for (int x = 0; x < number.size(); ++x) {

      if (number[x] == inputs)

      return x;

    }

    return(-1);
}

int main()
{
    init_vector();

    cout << "Enter two values (number/single digit spelt out) separated by a character (+, -, * or /), (Case Sensitive, Capitalize!).\n";

    while (true) {

        int num1 = 0;

        int num2 = 0;

        char operation = 0;

        num1 = grab_num();

        cin >> operation;

        num2 = grab_num();

        if (num1 <= -1 || num2 <= -1)
            cout << "Number must be a (positive) one digit or when spelt out to be a single digit number\n";

        else {

            switch (operation) {

            case '+':

                cout << "Sum of " << num1 << " and " << num2 << " is " << num1 + num2 << ".\n";
                break;

            case '-':

                cout << "Difference of " << num1 << " and " << num2 << " is " << num1 - num2 << ".\n";
                break;

            case '*':

                cout << "Product of " << num1 << " and " << num2 << " is " << num1 * num2 << ".\n";
                break;

            case '/':
                if (num2 == 0)

                    cout << "No division by zero!\n";
                    
                else

                    cout << "Quotient of " << num1 << " and " << num2 << " is " << double(num1)/num2 << ".\n";
                break;

            default:

                cout << "Invalid operation\n";
                break;

            }
        }
    }
}