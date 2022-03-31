/******************************************************************************

Code By: Rajdeep Dhillon

*******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cassert>

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
    int errorCheckNum = -1;
    int value = 5;
    int choice;
    PrintGreetings();
    PrintCurrentValue(value);
    choice = MenuChoice();

    value = InputAnotherValue();    
    cout << value << endl;
    
    PrintByeBye();
    PrintMenuError();
    ErrorCheck(errorCheckNum);

    assert(Add(1, 5) == 6);
    assert(Add(500, 900) == 1400);
    assert(Add(0, 0) == 0);
    assert(Add(1, 0) == 1);
    assert(Add(-200, 100) == -100);
    
    assert(Subtract(1, 5) == -4);
    assert(Subtract(999, 5) == 994);
    assert(Subtract(-500, 5) == -505);
    assert(Subtract(0, 0) == 0);
    assert(Subtract(0, -6000) == 6000);
    
    assert(Multiply(1, 5) == 5);
    assert(Multiply(0, 5) == 0);
    assert(Multiply(0, 0) == 0);
    assert(Multiply(900, 2) == 1800);
    assert(Multiply(-5, 5) == -25);
    
    assert(Divide(1, 5) == 0);
    assert(Divide(5, 5) == 1);
    assert(Divide(600, 30) == 20);
    assert(Divide(-25, 5) == -5);
    assert(Divide(-1, -1) == 1);
    
    assert(Modulo(1, 5) == 1);
    assert(Modulo(500, 27) == 14);
    assert(Modulo(2700, 7) == 5);
    assert(Modulo(0, 1) == 0);
    assert(Modulo(5, 5) == 0);
    
    assert(Sqrt(1) == 1);
    assert(Sqrt(9) == 3);
    assert(Sqrt(0) == 0);
    assert(Sqrt(81) == 9);
    assert(Sqrt(4) == 2);

    return 0;
}

void PrintGreetings() {
    cout << "+";
    cout << setfill('=') << setw(25) << "";
    cout << "+" << endl;
    
    cout << "|/\\/\\Falcon Calculator/\\/\\|" << endl;
    
    cout << "+";
    cout << setfill('=') << setw(25) << "";
    cout << "+" << endl;
}

void PrintByeBye() {
    cout << "Thank you for using Falcon Calculator!" << endl;
    
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




























Part 2) 

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
    
    cout << "|/\\/\\Falcon Calculator/\\/\\|" << endl;
    
    cout << "+";
    cout << setfill('=') << setw(25) << "";
    cout << "+" << endl;
}

void PrintByeBye() {
    cout << "Thank you for using Falcon Calculator!" << endl;
    
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
