// File: DistanceException.cpp
// Created by Joshua Stammen on 11/9/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include "Distance.h"
using namespace std;
// Constants,Structs, Classes



// Prototypes


// Main Program Program

int main()
{
    try
    {
        Distance dist(17, 3.5);
        Distance dist2;
        dist.getDistance();
        dist2.getDistance();

        cout<<"\nd1=";
        dist.showDistance() ;
        cout<<"\nd2=";
        dist2.showDistance() ;
    }
    catch(Distance::InchesEx) //catch exception
    {
        cout<<"Initialization Error"
            "Inches value too large";
    }
    //Continue here
    cout<<"\nMore work here. I am not dead"<<endl;


    return 0;

}
// Function Definitions