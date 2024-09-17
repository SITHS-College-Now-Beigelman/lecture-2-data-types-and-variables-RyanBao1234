//Ryan Bao
//Lecture 2
//9/16/2024

#include <iostream>                                       //io stream for ease of coding

using namespace std;                                      //std for ease of coding

int main()                                                //initialize main
{
    int INT = 7;                                          //initialize variables
    float FLOAT = 2.99;
    double DOUBLE = 3.98;
    char CHAR = 'T';
    bool BOOL = false;
    string STRING = "C++ is a code";
    cout << "int: " << INT << endl;                       //print variables
    cout << "float: " << FLOAT << endl;                                                     
    cout << "Double: " << DOUBLE << endl;
    cout << "Char: " << CHAR << endl;
    cout << "Bool: " << BOOL << endl;
    cout << "String: " << STRING << endl;
    cout << ' ' << endl;

    int inches;
    inches = 100;                                       //initialize and store variable
    cout << inches << " inch(es) = ";                   //perform operations using variable
    cout << inches / 12 << "feet (foot) and ";
    cout << inches % 12 << " inch(es)" << endl;
    cout << ' ' << endl;

    string math_1 = "2 + 3.5 = 5.5";
    string math_2 = "6 / 4 + 3.9 = 4.9";
    string math_3 = "5.4*2-(13.6 + 18/2) = -11.8";
    cout << math_1 << endl;                           //perform operations, variables are not needed
    cout << math_2 << endl;
    cout << math_3 << endl;
    cout << ' ' << endl;

    char char_1 = 'T';
    char char_2 = 'V';
    cout << (char_1 <char_2) << endl;
    cout << "T is less than V" << endl;

return 0;

}