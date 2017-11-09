//
// Created by butte on 11/9/2017.
//

#ifndef MEMORY_DISTANCE_H
#define MEMORY_DISTANCE_H

class Distance
{
private:
    int feet;
    float inches;
public:
    class InchesEx{}; //exception class
    Distance();
    Distance(int f, float i);
    void getDistance();
    void showDistance();
};



#endif //MEMORY_DISTANCE_H
