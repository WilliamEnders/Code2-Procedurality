//
//  Particle.cpp
//  particalSystem
//
//  Created by William Enders on 4/11/16.
//
//

#include "Particle.hpp"

Particle::Particle(){
    live = false;
}

ofPoint Particle::randomPointInCircle(float maxRad){
    ofPoint pnt;
    float rad = ofRandom(0,maxRad);
    float angle = ofRandom(0, TWO_PI);
    pnt.x = rad * cos(angle);
    pnt.y = rad * sin(angle);
    return pnt;
}

void Particle::setup(){
    pos = param.eCenter + randomPointInCircle(param.eRad);
    vel = randomPointInCircle(param.velRad);
    time = 0;
    lifeTime = param.lifeTime;
    live = true;
}

void Particle::update(float dt){
    if(live){
        
        //rotate velocity
        vel.rotate(0,0,param.rotate*dt);
        
        ofPoint acc;
        ofPoint delta = pos - param.eCenter;
        float len = delta.length();
        
        if(ofInRange(len, 0, param.eRad)){
            delta.normalize();
            
            //attraction/repulsion forces
            acc += delta*param.force;
            //spinning forces
            acc.x += delta.x * param.spin;
            acc.y += delta.y * param.spin;
        }
        
        vel += acc*dt;
        vel *= (1-param.friction);
        
        //update pos
        pos += vel * dt;
        
        time += dt;
        
        if(time>=lifeTime){
            live = false;
        }
    
    }
    
}

void Particle::draw(){
    
    if(live){
        float size = ofMap(time,0,lifeTime,1,3);
        
        ofColor color = ofColor::red;
        float hue = ofMap(time, 0, lifeTime, 128,255);
        color.setHue(hue);
        ofSetColor(color);
        ofDrawCircle(pos,size);
    }
    
}