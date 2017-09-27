#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    
    ofSeedRandom(mouseX);
    //ofSeedRandom(mouseY);
    
    //mouseX = ofRandom(-25, 25);
    //mouseY = ofRandom(-25, 25);
    
    //mouseX = ofMap(ofRandomf(), 0, 0, -25, 25);
    //mouseY = ofMap(ofRandomf(), 0, 0, -25, 25);
    
    
    for (int i = 0; i < 5; i++){
        for (int j=0; j < 5; j++){
            ofSetColor(0);
            ofDrawRectangle(50+i*140+ofRandom(-mouseX,mouseX)/30, 50+j*140+ofRandom(-mouseY,mouseY)/30, 130, 130);
        }
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
