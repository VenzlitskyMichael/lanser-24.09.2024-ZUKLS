#include <iostream>

using namespace std;

void guessNum() {
    int low = 0, high = 100, N;
    while (true) {
        N = (low + high) / 2;
        cout << "Your number > " << N << ", < " << N << " or == " << N << "? ";
        string resp;
        cin >> resp;
        if (resp == ">") {
            low = N + 1;
        }
        else if (resp == "<") {
            high = N - 1;
        }
        else if (resp == "==") {
            cout << "I gues your number!" << endl;
            break;
        }
        else {
            cout << "Pls Input >, < or ==." << endl;
        }
    }
}
void multip() {
    for (int num = 0; num <= 100; num++) {
        if (num % 3 == 0) {
            cout << num << endl;
        }
    }
}
void fact(){
    int number, result = 1;
    cout << "Input number for factorial: ";
    cin >> number;
    for (int i = 1; i <= number; i++) {
        result *= i;
    }
    cout << "Factorial " << number << " == " << result << endl;
}
void kmMile() {
    double miles;
    cout << "Input mile (or '-1' for exit: ";
    while (cin >> miles && miles != -1) {
        cout << miles << " mile = " << miles * 1.60 << " kilometrs" << endl;
        cout << "Input mile (or '-1' for exit): ";
    }
}

int main()
{
    guessNum();
    multip();
    fact();
    kmMile();

}

