//
// Created by butte on 11/14/2017.
//

#ifndef MEMORY_RESOURCE_H
#define MEMORY_RESOURCE_H

#include <iostream>
using namespace std;

class Resource
{
private:
    string name;
public:
    Resource(string n);
    ~Resource();
    string GetName() const;
};


#endif //MEMORY_RESOURCE_H
