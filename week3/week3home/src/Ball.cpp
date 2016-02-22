//
//  Ball.cpp
//  week3home
//
//  Created by William Enders on 2/22/16.
//
//

#include "Ball.hpp"
#include "ofMain.h"

void Ball:: draw(float xPos, float yPos){
    x = xPos;
    y = yPos;
    ofSetColor(color);
    ofDrawEllipse(xPos, yPos, diam, diam);
    
}