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
    ofDrawLine(0,ofGetHeight(),ofGetWidth(),0);
    ofSetColor(255, 13, 120);
    ofFill();
     circles(ofGetWidth(),ofGetHeight(), 100);
    
    ofPoint bob;
    bob.x = ofGetWidth()/2;
    bob.y = ofGetHeight()/2;
    float length = ofGetHeight()/4;
    float width = ofGetWidth()/4;
    diamond(bob, length, width);
}

//--------------------------------------------------------------
void ofApp::diamond(ofPoint center, float length, float width){
    ofDrawLine(center.x - width/2, center.y, center.x, center.y - length/2);
    ofDrawLine(center.x,center.y - length/2, center.x + width/2, center.y);
    ofDrawLine(center.x + width/2, center.y, center.x, center.y + length/2);
    ofDrawLine(center.x, center.y + length/2, center.x - width/2, center.y);
}

void ofApp::circles(float centerX, float centerY, float radius){
   ofDrawEllipse(centerX/1.5, centerY/2, radius, radius);
    ofDrawEllipse(centerX/2, centerY/2, radius, radius);
    ofDrawEllipse(centerX/3, centerY/2, radius, radius);
}
void ofApp::draw2(ofPoint center, float length, float width){
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
