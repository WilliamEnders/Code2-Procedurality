//
//  Person.cpp
//  week3assignment
//
//  Created by William Enders on 2/8/16.
//
//

#include "Person.hpp"
#include "ofMain.h"

/*
Person::Person(){

    height = 10;
     smell = "good";
     name = "Bob";

}
 */

void Person:: walk(){

    cout << "I'm walking!" << endl;
    
}

void Person:: sleep(){
    cout << "I'm sleeping!" << endl;

}

void Person:: talk(){
    cout << "I'm talking!" << endl;

}

void Person:: eat(){
    cout << "I'm eating!" << endl;

}

void Person:: draw(float xPos, float yPos){
    ofSetColor(r,g,b);
    ofFill();
    ofDrawEllipse(xPos, yPos, height, height);
}