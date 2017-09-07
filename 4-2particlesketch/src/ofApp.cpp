#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    x = ofGetWidth()/2;
    y = ofGetHeight()/2;
    velocityX = 1;

}

//--------------------------------------------------------------
void ofApp::update(){
    
    x =  x + velocityX;
    
    if (x > ofGetWidth()) {
        velocityX = -1;
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    
    
    //ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 10);
    ofDrawCircle(x, y, 10);

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
