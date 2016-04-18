//
//  Particle.hpp
//  particalSystem
//
//  Created by William Enders on 4/11/16.
//
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>

#endif /* Particle_hpp */

#include "ofMain.h"
#include "Params.hpp"

class Particle{
public:
    
    Particle();
    
    void setup();
    void update(float dt);
    void draw();
    
    Params param;
    ofPoint pos;
    ofPoint vel;
    float time;
    float lifeTime;
    bool live;
    ofPoint randomPointInCircle(float maxRad);
    
};