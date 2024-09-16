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
    inches = 100;                 //initialize and store variable
    cout << inches << " inch(es) = ";                   //perform operations using variable
    cout << inches / 12 << "feet (foot) and ";
    cout << inches % 12 << " inch(es)" << endl;
    cout << ' ' << endl;

    cout << 2 + 3.5 << endl;                       //perform operations, variables are not needed
    cout << 6 / 4 + 3.9 << endl;
    cout << 5.4*2-(13.6 + 18/2);
    cout << ' ' << endl;

    char char_1 = 'T';
    char char_2 = 'V';
    cout << int(char_1) << ' < ' << int(char_2) << endl;

return 0;

}