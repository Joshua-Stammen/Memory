// File: Freestore
// Created by Joshua Stammen on 11/14/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include "Resource.h"

using namespace std;
// Constants,Structs, Classes

// Prototypes

// Main Program Program

int main()
{
    {
        Resource localResource("local");
        string localString = localResource.GetName();
    }
    Resource *pResource = new Resource("Create with new");
    string newString = pResource->GetName();
    cout<< newString<< endl;

    int j =3;
    if(j==2)
    {
        delete pResource;
        return 1;
    }
    //Clean
    delete pResource;
    cout<< "Done"<<endl;
    return 0;
}
// Function Definitions