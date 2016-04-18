//
//  Params.cpp
//  particalSystem
//
//  Created by William Enders on 4/11/16.
//
//

#include "Params.hpp"

void Params::setup(){

    eCenter = ofPoint(ofGetWidth()/2, ofGetHeight()/2);
    eRad = 100;
    velRad = 100;
    lifeTime = 2.0;
    rotate = 90;
    force = 200;
    spin = 1000;
    friction = 0.05;

}