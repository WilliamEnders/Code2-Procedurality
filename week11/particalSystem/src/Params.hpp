//
//  Params.hpp
//  particalSystem
//
//  Created by William Enders on 4/11/16.
//
//

#ifndef Params_hpp
#define Params_hpp

#include <stdio.h>

#endif /* Params_hpp */

#include "ofMain.h"

class Params{

public:
    void setup();
    ofPoint eCenter; //center of emitter
    float eRad; //size of emitter
    float velRad; //bound of particles velocity
    float lifeTime; //max lifetime
    float time; //time since it was born
    float rotate;
    
    float force;
    float spin;
    float friction;
    
};