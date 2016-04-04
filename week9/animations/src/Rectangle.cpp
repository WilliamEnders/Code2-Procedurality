//
//  Rectangle.cpp
//  animations
//
//  Created by William Enders on 3/28/16.
//
//

#include "Rectangle.hpp"

Rectangle:: Rectangle(){
    
    //point b is (10,10)
    posA.x = 10;
    posA.y = 10;
    
    //point b is (1000,10)
    posB.x = 1000;
    posB.y = 10;
    
    catchUpSpeed = 0.03;
    
}

//methods
void Rectangle::interpolate(float myPct){
    //linear interpolation
    //pos.x = ((1-myPct) * posA.x) + (myPct*posB.x);
    //pos.y = ((1-myPct) * posA.y) + (myPct*posB.y);
    
    //powers
    pct = powf(myPct,2); //myPct^2
    pos.x = ((1-pct) * posA.x) + (pct*posB.x);
    pos.y = ((1-pct) * posA.y) + (pct*posB.y);
}

void Rectangle::zeno(float catchX, float catchY){
    
    pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x;
    pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
    
}

void Rectangle::draw(){
    ofDrawRectangle(pos.x, pos.y, 100, 100);
    
}