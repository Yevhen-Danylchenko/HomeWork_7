// HomeWork_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int fact = 1;
int number;
int a, b, c;


int factorial(int number) {
    
    if (number == 0) {
        fact = 1;
    }
    else {
        for (int i = 1; i <= number; i++) {
            fact *= i;
        }
    }
    return fact;
}

bool isPrime(int number) {
    if (number == 0 || number == 1) {
        return true;
    }
    else {
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                return false;
            } 
            else {
                return true;
            }
        }
    }
}

int maxOfThree(int a, int b, int c) {
    if (a > b && a > c) {
         return a;
    }
    else if (b > a && b > c) {
         return b;
    }
    else if (c > a && c > b) {
         return c;
    }
    else {
        cout << "Error!" << endl;
    }
    
}

int main()
{
    cout << "Enter number: \t";
    cin >> number;

    cout << "Factorial this number is: " << factorial(number) << endl;
    cout << isPrime(number) << endl;

    cout << "Enter three numbers: \t" << endl;
    cin >> a >> b >> c;
    cout << endl;
    cout << "Max number is: " << maxOfThree(a, b, c) << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
