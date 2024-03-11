#include "question3.h"
#include<random>


bool test_config()
{
    return true;
}

int roll_die() 
{
    int num = (rand() % 6) + 1;

    return num;
}

