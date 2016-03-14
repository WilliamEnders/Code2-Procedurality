#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    bob.xPos = 100;
    bob.yPos = 100;
    sarah.xPos = ofGetWidth()/2;
    sarah.yPos = ofGetHeight()/2;
    bob.setup(bob.xPos, bob.yPos);
    sarah.setup(sarah.xPos, sarah.yPos);

}

//--------------------------------------------------------------
void ofApp::update(){
    bob.update();
    sarah.update();
    for(int i = 0; i<myAliens.size(); i++){
        myAliens[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    bob.draw();
    sarah.draw();
    for(int i = 0; i<myAliens.size(); i++){
        myAliens[i].draw();
    }
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
    Alien tempAlien;
    tempAlien.setup(x, y);
    myAliens.push_back(tempAlien);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
     for(int i = 0; i<myAliens.size(); i++){
         float dist = ofDist(x,y,myAliens[i].xPos,myAliens[i].yPos);
         if(dist<myAliens[i].diam){
             myAliens.erase(myAliens.begin()+i);
         }
     }
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
