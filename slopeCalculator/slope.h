#ifndef SLOPE_H
#define SLOPE_H

#include <stdlib.h>

class Slope{
    public:
    Slope();
    float calculateSlope(float y2, float y1, float x2, float x1);
};

Slope::Slope(){
}

float Slope::calculateSlope(float y2, float y1, float x2, float x1){
    return (y2 - y1) / (x2 - x1);
}

#endif