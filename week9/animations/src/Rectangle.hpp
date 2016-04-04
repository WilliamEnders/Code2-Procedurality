//
//  Rectangle.hpp
//  animations
//
//  Created by William Enders on 3/28/16.
//
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>

#endif /* Rectangle_hpp */

#include "ofMain.h"

class Rectangle{
public:
    //variables
    float pct;
    ofPoint posA;
    ofPoint posB;
    ofPoint pos;
    float catchUpSpeed;
    
    //constructor
    Rectangle();
    
    //methods
    void interpolate(float myPct);
    void draw();
    void zeno(float catchX, float catchY);
};