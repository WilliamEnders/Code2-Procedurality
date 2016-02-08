#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0,0,0);

}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawLine(0,0,ofGetWidth(),ofGetHeight());
    ofSetColor(255, 13, 120);
    ofFill();
    ofDrawEllipse(ofGetWidth()/2, ofGetHeight()/2, 100, 100);
    
    ofPoint bob;
    bob.x = ofGetWidth()/2;
    bob.y = ofGetHeight()/2;
    float length = ofGetHeight()/4;
    float width = ofGetWidth()/4;
    diamond(bob, length, width);
}

//--------------------------------------------------------------
void ofApp::diamond(ofPoint center, float length, float width){
    ofDrawLine(center.x - width/2, center.y + length/2, center.x, center.y - length/2);
    ofDrawLine(center.x,center.y - length/2, center.x + width/2, center.y + length/2);
    ofDrawLine(center.x + width/2, center.y + length/2, center.x, center.y + length);
    ofDrawLine(center.x, center.y + length, center.x - width/2, center.y + length/2);
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
