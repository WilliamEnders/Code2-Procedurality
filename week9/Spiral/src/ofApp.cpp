#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundAuto(false);
    ofSetFrameRate(20);
    
    ofSetBackgroundColor(20);
    
    angle = 0;
    radius = 1;
    ellipse = 20;

}

//--------------------------------------------------------------
void ofApp::update(){
    
    angle += 0.2;
    radius += 1;
    
    xPos = radius * cos(angle);
    yPos = radius * sin(angle);


}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofFill();
    ofSetColor(ofRandom(170,200), ofRandom(90,120), ofRandom(190,220));

    ofDrawEllipse(xPos, yPos, ellipse, ellipse);

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
