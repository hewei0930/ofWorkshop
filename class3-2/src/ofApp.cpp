#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    
    float time = ofGetElapsedTimef();
    float radius = ofGetElapsedTimef();
    
    for(int i =0; i< ofGetWidth(); i++){
        for(int j=0; j<ofGetHeight(); j++){
    
    
    if (mouseX > ofGetWidth() || mouseX < 0 || mouseY > ofGetHeight() || mouseY < 0){
        
        ofSetColor(0, ofRandom(0,255), 0);
        radius = ofRandom(10, 100);

    }
            
    else{
        ofSetColor(255,
                   255,
                   117 + 100*sin(i*2));
        radius = 10;
        
    }

            
            ofDrawCircle(i*ofGetWidth()/10, j*ofGetHeight()/10, radius);
            
            //ofDrawRectangle(i*25+mouseX, 200+j*100, 50*sin(i*10 + time + j*40), 80*cos(i*0.1 + j*0.4 + time));
            
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
