#include "ofApp.h"

//--------------------------------------------------------------


void ofApp::setup(){

    Misca.smell = "good";
    Misca.r = 255;
    Misca.g = 0;
    Misca.b = 0;
    Joe.r = 0;
    Joe.g = 0;
    Joe.b = 255;
    Misca.height = 11;
    Joe.height = 33;
    Misca.name = "MiMi";
    
}

//--------------------------------------------------------------
void ofApp::update(){
    cout << "Misca smell:" << Misca.smell << endl;
    cout << "Misca height:" << Misca.height << endl;
    cout << "Misca name:" << Misca.name << endl;
}

//--------------------------------------------------------------
void ofApp::draw(){
    Misca.draw(ofGetWidth()/2,ofGetHeight()/2);
    Joe.draw(ofGetWidth()/2 - 2*Joe.height,ofGetHeight()/2);

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
