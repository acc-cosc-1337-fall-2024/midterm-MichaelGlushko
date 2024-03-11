#include"question2.h"
#include<iostream>

using std::cin;
using std::cout;

int main()
{
    char ch;
    int num;
    char input;
    

    do
    {
        do
        {
        cout<<"\nEnter a number larger than 1 and less than or equal 60: ";
        cin>>num;
        } while(num <= 1 || num > 60);

        auto primes = get_primes(num); 
        for (auto x : primes) { 
            cout << x << " "; 
        }

        cout << "\nEnter 'Y' to run again or 'N' to exit: ";
        cin >> ch;
        
        if(ch == 'N') {
            cout << "\nExited Program";
            break;
        }
    }while(ch != 'y');
}