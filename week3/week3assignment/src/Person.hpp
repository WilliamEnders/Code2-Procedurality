//
//  Person.hpp
//  week3assignment
//
//  Created by William Enders on 2/8/16.
//
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>

#endif /* Person_hpp */

#include "ofMain.h"

class Person{

public:
    
    int height;
    //ofColor fur;
    int r,g,b;
    string smell;
    string name;
    
    void walk();
    void sleep();
    void talk();
    void eat();
    
    void draw(float xPos, float yPos);

};