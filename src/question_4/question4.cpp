#include"question4.h"

bool test_config()
{
    return true;
}

std::string gpa_to_letter_grade(double gpa)
{
    if(gpa <= 4 && gpa >= 3.5) {
        return "A";
    }
    else if(gpa >= 3) {
        return "B";
    }
    else if(gpa >= 2) {
        return "C";
    }
    else if(gpa >= 1) {
        return "D";
    }
    else if(gpa >= 0) {
        return "F";
    }
    else {
        return "Not Within range";
    }
}