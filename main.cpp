/******************************************************************************

Code By: Rajdeep Dhillon

*******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void PrintGreetings();
void PrintByeBye();
void PrintMenuError();
void PrintCurrentValue(int currentValue);
int MenuChoice();
int InputAnotherValue();
int Add(int num1, int num2);
int Subtract(int num1, int num2);
int Multiply(int num1, int num2);
int Divide(int num1, int num2);
int Modulo(int num1, int num2);
void ErrorCheck(int& value);
int Sqrt(int num1);


int main()
{
    int value;
    int choice;

    PrintGreetings();

    cout << "Enter a value: " << endl;
    cin >> value;
    ErrorCheck(value);



    do {
        PrintCurrentValue(value);
        choice = MenuChoice();

        if(choice == 1) {
            int secondValue = InputAnotherValue();
            int answer = Add(value, secondValue);
            if(answer != 0) {
                ErrorCheck(answer);
                if(answer != 0) {
                    cout << value << " + " << secondValue << " = " << answer << endl;
                    value = answer;

                }
            }
            else {
                    cout << "Answer is 0." << endl;
            }
            value = answer;
        }
        else if(choice == 2) {
            int secondValue = InputAnotherValue();
            int answer = Subtract(value, secondValue);
            if(answer != 0) {
                ErrorCheck(answer);
                if(answer != 0) {
                    cout << value << " - " << secondValue << " = " << answer << endl;
                    value = answer;

                }
            }
            else {
                    cout << "Answer is 0." << endl;
            }
            value = answer;
        }
        else if(choice == 3) {
            int secondValue = InputAnotherValue();
            int answer = Multiply(value, secondValue);
            if(answer != 0) {
                ErrorCheck(answer);
                if(answer != 0) {
                    cout << value << " * " << secondValue << " = " << answer << endl;
                    value = answer;

                }
            }
            else {
                    cout << "Answer is 0." << endl;
            }
            value = answer;
        }
        else if(choice == 4) {
            int secondValue = InputAnotherValue();
            int answer = Divide(value, secondValue);
            if(answer != 0) {
                ErrorCheck(answer);
                if(answer != 0) {
                    cout << value << " / " << secondValue << " = " << answer << endl;
                    value = answer;

                }
            }
            else {
                    cout << "Answer is 0." << endl;
            }
            value = answer;
        }
        else if(choice == 5) {
            int secondValue = InputAnotherValue();
            int answer = Modulo(value, secondValue);
            if(answer != 0) {
                ErrorCheck(answer);
                if(answer != 0) {
                    cout << value << " % " << secondValue << " = " << answer << endl;
                    value = answer;

                }
            }
            else {
                    cout << "Answer is 0." << endl;
            }
            value = answer;
        }
        else if(choice == 6) {
            int answer = Sqrt(value);
            if(answer != 0) {
                ErrorCheck(answer);
                if(answer != 0) {
                    cout << "Sqrt of " << value << " = " << answer << endl;
                    value = answer;

                }
            }
            else {
                    cout << "Answer is 0." << endl;
            }
            value = answer;
        }
        else if(choice == 7) {
            break;
        }

        else {
            PrintMenuError();
        }

        cout << "Enter a value: " << endl;
        cin >> value;
        ErrorCheck(value);

    } while (choice != 7);
     PrintByeBye();

    return 0;
}

void PrintGreetings() {
    cout << "+";
    cout << setfill('=') << setw(25) << "";
    cout << "+" << endl;

    cout << "|/\\/\\Simple Calculator/\\/\\|" << endl;

    cout << "+";
    cout << setfill('=') << setw(25) << "";
    cout << "+" << endl;
}

void PrintByeBye() {
    cout << "Thank you for using the Calculator!" << endl;

}

void PrintMenuError() {
    cout << "The choice is not valid. " << endl;

}

void PrintCurrentValue(int currentValue) {
    cout << "Current value: " << currentValue << endl;

}

int MenuChoice() {
    int choice;
    cout << "1) Add    2) Subtract 3) Multiply " << endl;
    cout << "4) Divide 5) Modulo   6) Square root " << endl;
    cout << "7) Exit " << endl;
    cout << "Choose Functionality: " << endl;
    cin >> choice;
    return choice;

}

int InputAnotherValue() {
    int secondValue;
    cout << "Input another value: " << endl;
    cin >> secondValue;
    return secondValue;
}

int Add(int num1, int num2) {
    return num1 + num2;

}

int Subtract(int num1, int num2) {
    return num1 - num2;

}

int Multiply(int num1, int num2) {
    return num1 * num2;

}

int Divide(int num1, int num2) {
    if (num2 != 0) {
        return num1 / num2;
    }
    else {
        return -1;
    }
}

int Modulo(int num1, int num2) {
    if (num2 != 0) {
        return num1 % num2;
    }
    else {
        return -1;
    }
}

int Sqrt(int num1) {
    return sqrt(num1);

}

void ErrorCheck(int& value) {
    if (value < 0 || value > 99999) {
        cout << "Calculation Error, resetting..." << endl;
        value = 0;
    }

}
