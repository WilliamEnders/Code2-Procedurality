#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

void ofApp::drawBranch(float length, float theta){
    ofDrawLine(0, 0, 0, -length);
    ofTranslate(0, -length);
    length = length * 0.7;
    if(length > 2){
        ofPushMatrix();
        ofRotate(theta);
        drawBranch(length, theta);
        ofPopMatrix();
        
        ofPushMatrix();
        ofRotate(-theta);
        drawBranch(length, theta);
        ofPopMatrix();
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
//    ofSetColor(255,0,0);
//    ofFill();
//    float length = 200;
    ofTranslate(ofGetWidth()/2, ofGetHeight());
//    ofDrawLine(0, 0, 0, -length);
//    ofTranslate(0, -length);
//    ofRotate(30);
//    ofDrawLine(0,0,0,-length);
    
    drawBranch(230,cos(ofGetElapsedTimef()) * 80);
    
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