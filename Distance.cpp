//
// Created by butte on 11/9/2017.
//

#include "Distance.h"
#include <iostream>
using namespace std;
 Distance::Distance()
 {
     feet = 0;
     inches = 0.0;
 }
Distance::Distance(int f, float i)
{
    feet =f;
    inches = i;
}

void Distance::getDistance()
{
    cout<<"\n Enter feet:";
    cin>>feet;
    cout<<"\n Enter inches:";
    cin>>inches;
    if(inches >= 12.0) //too big
    {
        throw InchesEx();
    }
}

void Distance::showDistance()
{
 cout<<feet << "\'-"<<inches<<"\"";
}
