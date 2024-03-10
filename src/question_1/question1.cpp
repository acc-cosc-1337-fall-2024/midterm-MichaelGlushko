#include "question1.h"

bool test_config()
{
    return true;
}

bool is_palindrome(string str)
{
    string palindrome;
    int len = str.length();

    for(int i = len; i > 0; i--) {
        palindrome += str[i-1];
    }

    if(palindrome == str) {
        return true;
    }
    else if(palindrome != str) {
        return false;
    }
}