#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    for(int i = 0; i < 50; i++){
        position[i] = ofGetWidth()/2;
        speed[i] = ofRandom(-10, 10);
        colors[i] = ofColor(ofRandom(255),ofRandom(255),ofRandom(255));
        radius[i] = ofRandom(1, 20);
        
    
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    
    for(int i = 0; i < 50; i++){
        position[i] = position[i] + speed[i];
        
        if(position[i] > ofGetWidth()){
            position[i] = 0;
        }
        
        if(position[i] < 0){
            position[i] = ofGetWidth();
        }
    
    
    }

    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0, 0, 0);
    
    for (int i = 0; i < 50; i++){
        ofSetColor(colors[i]);
        ofDrawCircle(position[i], i*15, radius[i]);
    
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key ==' '){
        for(int i = 0; i < 50; i++){
            position[i] = ofGetWidth()/2;
        
        
        }
    
    
    }

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
