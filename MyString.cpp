//
// Created by butte on 11/7/2017.
//

#include <cstring>
#include<iostream>
using namespace std;
#include "MyString.h"

/*!
 * Constructor
 * @param s
 */
MyString::MyString(char *s)
{
    int length = strlen(s); //length of input string
    //Get Memory
    str = new char[length +1];
    strcpy(str,s); //copy argument to new allocated space, and save address to str
}

/*!
 * Deconstructor
 */
MyString::~MyString()
{
    cout<< "Deleting memory" <<endl;
    delete[]str;
}

void MyString::display()
{
    cout<< str<<endl;
}

/*!
 * Update string. This will allocate new memory.
 * Change my Pointer to the new space.
 * Delete old memory
 * @param newstr new string to update
 */
void MyString::updateString(char *newStr)
{
    int length = strlen(newStr);
    char *temp = new char[length +1]; //allocate new memory
    strcpy(temp,newStr); //copy argument
    cout<<"Deleting old memory"<<endl;
    delete[]str; //Delete
    str= temp;   //Point to new allocated space
}

