#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //ofSetBackgroundAuto(false);
    posA.x = 10;
    posA.y = 10;
    
    posB.x = 1000;
    posB.y = 10;
}

//--------------------------------------------------------------
void ofApp::update(){
    pct = sin(ofGetElapsedTimef());
    interpolate(pct);
}

//--------------------------------------------------------------
void ofApp::interpolate(float myPct){
    pct = powf(myPct,2);
    pos.x = (1-pct) * posA.x + pct * posB.x;
    //pos.y = (1-pct) * posA.y + pct * posB.y;
    pos.y = abs(300 * sin(ofGetElapsedTimef() * 2));
    cout << pos.y << endl;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(0, ofGetHeight()/2);
    ofDrawEllipse(pos.x, pos.y, 100, 100);
    ofDrawLine(ofGetWidth()/2,0,pos.x,pos.y);
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
