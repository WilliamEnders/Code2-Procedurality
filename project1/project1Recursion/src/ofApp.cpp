#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(100);
    ofSetBackgroundAuto(false);
     screenX = ofGetWidth()/2;
     screenY = ofGetHeight();
    mazeSize = 50;
}

void ofApp::drawLine(float length, float theta, int dir, int num){
    float r = ofRandomuf();
    ofSetColor(0,0,0,150);
    ofFill();
    ofDrawLine(0, 0, 0, -length);
    ofTranslate(0, -length);
    
    if(r>0.9){
        drawCircle(5);
    }
    
     if(num<mazeSize){
         
        r = ofRandomuf();
         if(r > 0.5){
             dir = 1;
         }else{
             dir = -1;
         }
         
         r = ofRandomuf();
         if(r > 0 && r < 0.4){
             ofPushMatrix();
             ofRotate(theta);
             drawLine(length, 0, dir, num + 1);
             ofPopMatrix();
         }else if(r > 0.4 && r < 0.90){
             ofPushMatrix();
             ofRotate(theta);
             drawLine(length, 90 * dir, dir,num + 1);
             ofPopMatrix();
         }else{
             ofPushMatrix();
             ofRotate(theta);
             drawLine(length, 90 * dir, dir,num + 1);
             ofPopMatrix();
             ofPushMatrix();
             ofRotate(-theta);
             drawLine(length, 90 * dir, dir,num + 1);
             ofPopMatrix();
         }
     }
}

void ofApp::drawCircle(float radius){
    float r = ofRandomuf();
    if(r > 0.95){
        ofSetColor(250,126,50,150);
        ofDrawCircle(0, 0, radius*4);
        ofSetColor(0,0,0,100);
        ofDrawCircle(0, 0, radius);
    }else{
        ofDrawCircle(0, 0, radius);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
   
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    ofBackground(100);
    screenX = ofGetWidth()/2;
    screenY = ofGetHeight()/2;
    ofTranslate(screenX, screenY);
    drawLine(30,0,1,1);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
