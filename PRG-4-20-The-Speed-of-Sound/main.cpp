//
//  main.cpp
//  PRG-4-20-The-Speed-of-Sound
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  The following table shows the approximate speed of sound in air, water, and steel.
//
//  Medium                      Speed
//  ----------------------------------------------------
//  Air                         1,100 feet per second
//  Water                       4,900 feet per second
//  Steel                       16,400 feet per second
//
//  Write a program that displays a menu allowing the user to select air, water, or steel.
//  After the user has made a selection, he or she should be asked to enter the distance a
//  sound wave will travel in the selected medium. The program will then display the
//  amount of time it will take. (Round the answer to four decimal places.)
//
//  Input Validation: Check that the user has selected one of the available choices from the
//  menu. Do not accept distances less than 0.

#include <iostream>

using namespace std;

int main()
{
    int intChoice;
    
    const int INT_CHOICE_AIR = 1,
              INT_CHOICE_WATER = 2,
              INT_CHOICE_STEEL = 3;
    
    float fltDistance,
          fltTime;
    
    const float FLT_SPEED_AIR = 1.0f / 1100.0f,
                FLT_SPEED_WATER = 1.0f / 4900.0f,
                FLT_SPEED_STEEL = 1.0f / 16400.0f;
    
    const string STR_AIR = "air",
                 STR_WATER = "water",
                 STR_STEEL = "steel";
    
    cout << "Please select a medium for your soundwave to pass through:\n"
         << "1. Air\n"
         << "2. Water\n"
         << "3. Steel\n";
    cin >> intChoice;
    while(!cin || intChoice < 1 || intChoice > 3)
    {
        cout << "Please enter a valid selection from the menu:\n";
        cin.clear();
        cin.ignore();
        cin >> intChoice;
    }
    
    cout << "Please enter a distance for your soundwave to travel:\n";
    cin >> fltDistance;
    while(!cin || fltDistance <= 0.0f || fltDistance >= 100000.0f)
    {
        cout << "Please enter a valid distance between 0 and 100,000 feet:\n";
        cin.clear();
        cin.ignore();
        cin >> fltDistance;
    }
    
    switch(intChoice)
    {
        case(INT_CHOICE_AIR):
            fltTime = fltDistance * FLT_SPEED_AIR;
            cout << "Your soundwave took "
                 << fltTime
                 << " seconds\nto travel "
                 << fltDistance
                 << " feet through "
                 << STR_AIR;
            break;
        case(INT_CHOICE_WATER):
            fltTime = fltDistance * FLT_SPEED_WATER;
            cout << "Your soundwave took "
                 << fltTime
                 << " seconds\nto travel "
                 << fltDistance
                 << " through "
                 << STR_WATER;
            break;
        case(INT_CHOICE_STEEL):
            fltTime = fltDistance * FLT_SPEED_STEEL;
            cout << "Your soundwave took "
                 << fltTime
                 << " seconds\nto travel "
                 << fltDistance
                 << " through "
                 << STR_STEEL;
            break;
    }
    
    return 0;
}


