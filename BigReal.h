//
// Created by hp on 12/15/2023.
//

#ifndef TASK2_ASS2_BIGREAL_H
#define TASK2_ASS2_BIGREAL_H
#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------------------------------------------

// declaration of BigReal class
class BigReal {
private:
    string number;
    bool neg = false;
public:

    //----------------------------------------------------------------------------------------------------

    // declaration isvalid function
    bool isValid (string s);
    // Default constructor
    BigReal() {
        number = "";
    }

    BigReal (string number);
    // Setter
    void set_string(string real_number) {
        number = real_number;
        if (number[0] == '-') {
            neg = true;
        }
    }

    // function to print invalid message to the user
    void not_valid () {
        cout<<"INVALID NUMBERS";
        exit(0);
    }
    // getter
    bool get_neg() {
        return neg;
    }
    //getter
    string get_string() {
        return number;
    }
    //----------------------------------------------------------------------------------------------------


    //----------------------------------------------------------------------------------------------------
    // operator overload '+'
    BigReal operator + ( BigReal a);
    // operator overload '-'
    BigReal operator - ( BigReal a);
    // operator overload '<'
    bool operator < ( BigReal a);
    // operator overload '>'
    bool operator > ( BigReal a);
    // operator overload "=="
    bool operator == ( BigReal a);
    // operator overload "<<" insertion
    friend ostream& operator << (ostream& out, BigReal num);
    //----------------------------------------------------------------------------------------------------
};




#endif //TASK2_ASS2_BIGREAL_H
