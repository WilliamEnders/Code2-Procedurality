#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    spacing = 10;
    
    ofColor sunC(255,220,57);
    Sun.color = sunC;
    Sun.diam = 1000;
    Sun.name = "Sun";
    
    ofColor mercuryC(198,189,183);
    Mercury.color = mercuryC;
    Mercury.diam = 20;
    Mercury.name = "Mercury";
    
    ofColor venusC(167,93,50);
    Venus.color = venusC;
    Venus.diam = 25;
    Venus.name = "Venus";
    
    ofColor earthC(65,108,194);
    Earth.color = earthC;
    Earth.diam = 30;
    Earth.name = "Earth";
    
    ofColor marsC(225,222,199);
    Mars.color = marsC;
    Mars.diam = 15;
     Mars.name = "Mars";
    
    ofColor jupiterC(218,194,157);
    Jupiter.color = jupiterC;
    Jupiter.diam = 100;
    Jupiter.name = "Jupiter";
    
    ofColor saturnC(240,209,174);
    Saturn.color = saturnC;
    Saturn.diam = 70;
    Saturn.name = "Saturn";
    
    ofColor uranusC(183,237,234);
    Uranus.color = uranusC;
    Uranus.diam = 50;
    Uranus.name = "Uranus";
    
    ofColor neptuneC(27,49,220);
    Neptune.color = neptuneC;
    Neptune.diam = 50;
    Neptune.name = "Neptune";
    
    ofColor plutoC(119,94,64);
    Pluto.color = plutoC;
    Pluto.diam = 10;
    Pluto.name = "Pluto";
   
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0,0,0);
    Sun.draw(-100,ofGetHeight()/2);
    Mercury.draw(Sun.x + Sun.diam/2 + Mercury.diam/2 + spacing,ofGetHeight()/2);
    Venus.draw(Mercury.x + Mercury.diam/2 + Venus.diam/2 + spacing,ofGetHeight()/2);
    Earth.draw(Venus.x + Venus.diam/2 + Earth.diam/2 + spacing,ofGetHeight()/2);
    Mars.draw(Earth.x + Earth.diam/2 + Mars.diam/2 + spacing,ofGetHeight()/2);
    Jupiter.draw(Mars.x + Mars.diam/2 + Jupiter.diam/2 + spacing,ofGetHeight()/2);
    Saturn.draw(Jupiter.x + Jupiter.diam/2 + Saturn.diam/2 + spacing,ofGetHeight()/2);
    Uranus.draw(Saturn.x + Saturn.diam/2 + Uranus.diam/2 + spacing,ofGetHeight()/2);
    Neptune.draw(Uranus.x + Uranus.diam/2 + Neptune.diam/2 + spacing,ofGetHeight()/2);
    Pluto.draw(Neptune.x + Neptune.diam/2 + Pluto.diam/2 + spacing,ofGetHeight()/2);
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
