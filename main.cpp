#include <iostream>
#include "birthday.h"
#include "People.h"
using namespace std;


int main()
{
    float cm, inch;

    cout << "Enter the length in centimeters: ";
    cin >> cm;

    // 1 inch = 2.54 cm
    inch = cm / 2.54;

    cout << cm << " centimeters is equal to " << inch << " inches." << endl;

    return 0;


    }


