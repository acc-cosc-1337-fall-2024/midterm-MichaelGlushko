#include"question3.h"
#include<iostream>

using std::cin;
using std::cout;


int main()
{
    char choice;

    do {
    cout<<"\nWould you like to roll the die? Please enter 'Y' for yes, or any other key for no: ";
    cin>>choice;
    
    if(choice == 'Y') {
        cout<<roll_die()<<"\n";
    } 
    else {
        cout<<"Exited Program\n";
    }
    }while(choice == 'Y');

    return 0;
}