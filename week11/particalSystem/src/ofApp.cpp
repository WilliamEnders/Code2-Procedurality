#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //ofSetBackgroundAuto(false);
    //particle.param.setup();
    time0 = ofGetElapsedTimef();
    bornCount = 0;
    bornRate = 1000;
    
    guiPanel.setup();
    guiPanel.add(eRadGUI.setup("eRad",200,100,400));
    guiPanel.add(velRadGUI.setup("velRad",100,0,2000));
    guiPanel.add(lifeTimeGUI.setup("lifeTime",2,0,10));
    guiPanel.add(rotateGUI.setup("rotate",90,0,360));
    guiPanel.add(forceGUI.setup("force",-200,-300,300));
    guiPanel.add(spinGUI.setup("spin",1000,0,2000));
    guiPanel.add(frictionGUI.setup("friction",0.05,0,1));
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    time = ofGetElapsedTimef();
    dt = ofClamp(time - time0, 0, 0.1);
    time0 = time;
    
    for(int i = 0; i < particle.size(); i++){
        if(!particle[i].live){
            particle.erase(particle.begin() + i);
        }
    }
    
    bornCount += bornRate * dt;
    
    if(bornCount>=1){
        int bornN = int(bornCount);
        bornCount -= bornN;
        for(int i = 0; i < bornN; i++){
            Particle newP;
            newP.param.setup();
            newP.setup();
            particle.push_back(newP);
        }
    }
    
     for(int i = 0; i < particle.size(); i++){
         
         
         particle[i].param.eRad = eRadGUI;
         particle[i].param.velRad = velRadGUI;
         particle[i].param.lifeTime = lifeTimeGUI;
         particle[i].param.rotate = rotateGUI;
         particle[i].param.force = forceGUI;
         particle[i].param.spin = spinGUI;
         particle[i].param.friction = frictionGUI;
         
         
         particle[i].update(dt);
         
         
     }
}

//--------------------------------------------------------------
void ofApp::draw(){
    guiPanel.draw();
     for(int i = 0; i < particle.size(); i++){
         particle[i].draw();
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
