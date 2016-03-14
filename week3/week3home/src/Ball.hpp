//
//  Ball.hpp
//  week3home
//
//  Created by William Enders on 2/22/16.
//
//

#ifndef Ball_hpp
#define Ball_hpp

#include <stdio.h>

#endif /* Ball_hpp */

#include "ofMain.h"

class Ball{
    
public:
    
    float diam;
    ofColor color;
    float x,y;
    string name;
    
    void draw(float xPos, float yPos);
    
};