#include"question1.h"
#include<iostream>

using std::cin;
using std::cout;

int main()
{
    int input;
    string str;
    int palindrome;

    while(input != 2) {
        cout<<"\n\n    MENU\n1- check palindrome\n2- Exit\nchoose 1 or 2: ";
        cin>>input;

        if (input == 1) {
            cout<<"\nEnter a string to check for a palindrome: ";
            cin>>str;

            palindrome = is_palindrome(str);
            
            if(palindrome == 1) {
                cout<<"true";
            }
            else if(palindrome == 0) {
                cout<<"false";
            }
        }
        else if(input == 2) {
            cout<<"EXITED PROGRAM\n";
            break;
        }
        else {
            input = 1;
        }
    }

    return 0;
}