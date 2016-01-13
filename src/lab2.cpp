#include "eecs230.h"

//
// Lab 2 programs
//

int illegalStatements() {
    /* Start here! */
    //int double = 0;
    //double char = 2.5;
    //char mychar = 'd'; mychar += 12;
    //unsigned int a = -1;
    //int pi = 3.14;
    //short num = 1e9;
    //string mystring = 5;
    return 0;
}




    int odd_even() {
        int test;
        cout << "Enter Integer \n";
        cin >> test;
        if (!cin) {
            simple_error("Input must be integer");
        }
        else {
            if (test % 2 == 0) {
                cout << "the value " << test << " is even";
            }
            else {
                cout << "the value " << test << " is odd";
            }
        }
        return 0;

    }

    int part2() {
        string operation;
        double first;
        double second;
        cout << "Enter operation and operands \n";
        cin >> operation >> first >> second;
        if (! cin) {
            cout << "Invalid Inputs";
        }
        else {
            if (operation=="+"){
                cout << first  << "+" << second << " eqauls " << first + second;
            }
            if (operation=="-") {
                cout << "first " << "-" << " second" << first - second;
            }
            if (operation=="*") {
                cout << "first " << "*" << " second" << first * second;
            }
            if (operation=="/") {
                cout << "first " << "/" << " second" << first / second;
            }


        }
        return 0;
    }

    enum gender {m, f};
    int call_me () {
        string friend_gender;
        string friend_name;
        cout <<"Enter friend name and 0 for male, 1 for female \n";
        cin >> friend_name >> friend_gender;
        if (! cin) {
            simple_error("Invalid Inputs");
        }
        else if (friend_gender == m) {
                cout << "If you see "<< friend_name << " please ask him to call me";
            }
        else if (friend_gender == f) {
            cout << "If you see " << friend_name << " please ask her to call me";
        }

    }


int main() {
    //odd_even();
    //part2();
    call_me();
}
