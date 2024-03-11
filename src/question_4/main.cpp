#include"question4.h"
#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    char choice;
    double gpa;
    do {
    cout<<"\nEnter a double value within the range of 0 to 4: ";
    cin>>gpa;

    if(gpa>=0 && gpa <= 4) {
        string letter_grade = gpa_to_letter_grade(gpa);
        cout<<"\nYour letter grade is: "<<letter_grade;
    }
    else {
        std::cout<<"\nNot within range 0 to 4";
    }
    cout<<"\nDo you want to continue? Y or N: ";
    cin>>choice;
    
    }while(choice == 'Y');

    cout<<"\nExited Program\n";

    return 0;
}