//
// Created by butte on 11/14/2017.
//

#include "Resource.h"

Resource::Resource(string n)
{
    name = n;
    cout<< " Constructing" << name<<endl;
}

Resource::~Resource()
{
    cout<< " Deconstructing"<< name<<endl;
}
string Resource::GetName() const {

}