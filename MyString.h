//
// Created by butte on 11/7/2017.
//

#ifndef MEMORY_MYSTRING_H
#define MEMORY_MYSTRING_H



class MyString
{
private:
    char*str; //pointer to string
public:
    MyString(char*s); //constructor with one argument
    ~MyString();      //deconstructor
    void display();   //display the string
    void updateString(char*newstr);
};


#endif //MEMORY_MYSTRING_H
