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
    
    //float time = ofGetElapsedTimef();
    
    if mouseX > ofGetWidth() || mouseX < 0 ||
    
    for(int i =0; i< ofGetWidth(); i++){
        for(int j=0; j<ofGetHeight(); j++){
            
            int green = ofMap(sin(time), -1,1, 0, 255);
            ofSetColor(117 + 117*sin(i*0.02),
                       green,
                       117 + 100*sin(i*2));
            
            
            ofDrawCircle(<#float x#>, <#float y#>, <#float radius#>)
            
            
            
            
            
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
