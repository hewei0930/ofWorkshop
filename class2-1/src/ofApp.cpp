#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    int color = ofMap(mouseX, 0, ofGetHeight(), 0, 255);
    ofBackground( color );
    
    ofSetCircleResolution(100);
    
    
    
    ofSetColor( ofRandom(0,255), 0, 0);
    
    ofDrawCircle(ofGetWidth()/4, ofGetHeight()/2, ofMap(mouseX,0, ofGetHeight(),100,200));
    
    
    
    int green = ofMap(sin( ofGetElapsedTimef() ), -1, 1, 0, 255);
    ofSetColor( 0, green, 0);
   
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, ofMap(mouseX,0, ofGetHeight(),100,200));
    
    
    
    int blue = ofMap(sin( ofGetElapsedTimef() ), -0.01, 0.01, 0, 255);
    ofSetColor( 0, 0, blue);
    
    ofDrawCircle(ofGetWidth()*3/4, ofGetHeight()/2, ofMap(0, mouseY, 1000,100,ofGetHeight()/4));

    

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
