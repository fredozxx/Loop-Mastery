#include <iostream>
#include <string>
using namespace std;

void factorialCalculator();
void numberPyramid();
void sumOfEvenOrOdd();
void reverseString();

int main() {
    int choice;
    bool running = true;

    while (running) {
        cout << "\n========= Loop Mastery Program =========\n";
        cout << "1. Factorial Calculator\n";
        cout << "2. Number Pyramid\n";
        cout << "3. Sum of Even or Odd Numbers\n";
        cout << "4. Reverse a String\n";
        cout << "5. Exit\n";
        cout << "======================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                factorialCalculator();
                break;
            case 2:
                numberPyramid();
                break;
            case 3:
                sumOfEvenOrOdd();
                break;
            case 4:
                reverseString();
                break;
            case 5:
                cout << "Goodbye! Thanks for using Loop Mastery." << endl;
                running = false;
                break;
            default:
                cout << "Invalid option! Please choose a valid menu option." << endl;
        }
    }
    return 0;
}

void factorialCalculator() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int result = 1;
    int i = 1;
    while (i <= n) {
        result *= i;
        i++;
    }
    cout << "Factorial of " << n << " is: " << result << endl;
}

void numberPyramid() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << k << " ";
        }
        cout << endl;
    }
}

void sumOfEvenOrOdd() {
    int choice, limit, sum = 0;
    cout << "Choose an option:\n1. Sum of even numbers\n2. Sum of odd numbers\n";
    cin >> choice;
    cout << "Enter the upper limit: ";
    cin >> limit;
    int num = (choice == 1) ? 2 : 1;
    do {
        sum += num;
        num += 2;
    } while (num <= limit);
    cout << "Sum is: " << sum << endl;
}

void reverseString() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int len = str.length();
    int i = len - 1;
    cout << "Reversed string: ";
    while (i >= 0) {
        cout << str[i];
        i--;
    }
    cout << endl;
}
