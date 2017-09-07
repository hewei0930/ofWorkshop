#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0,0,0);
    
    //float x = 100;
    //float y = 100;
    // float width = 100;
    // float height = 400;
    
    float x = mouseX;
    float y = mouseY;
    float width = mouseX;
    float height = mouseY;
    
    float time = ofGetElapsedTimef();
    
    
    ofSetColor(117 + 117*sin(x*0.02),
               117 + 1*sin(x*0.2),
               117 + 100*sin(x*2));
        
    
    ofDrawLine(x,y,x+width*0.25,y+height);
    ofDrawLine(x+width*0.25,y+height,x+width*0.5,y);
    ofDrawLine(x+width*0.5,y,x+width*0.75,y+height);
    ofDrawLine(x+width*0.75,y+height,x+width,y);
    
    x=x+10;
    width=width*1.5;
    
    ofDrawLine(x,y,x+width*0.25,y+height);
    ofDrawLine(x+width*0.25,y+height,x+width*0.5,y);
    ofDrawLine(x+width*0.5,y,x+width*0.75,y+height);
    ofDrawLine(x+width*0.75,y+height,x+width,y);
    
    x=x+10;
    width=width*1.5;
    
    ofDrawLine(x,y,x+width*0.25,y+height);
    ofDrawLine(x+width*0.25,y+height,x+width*0.5,y);
    ofDrawLine(x+width*0.5,y,x+width*0.75,y+height);
    ofDrawLine(x+width*0.75,y+height,x+width,y);
    
    x=x+10;
    width=width*1.5;
    
    ofDrawLine(x,y,x+width*0.25,y+height);
    ofDrawLine(x+width*0.25,y+height,x+width*0.5,y);
    ofDrawLine(x+width*0.5,y,x+width*0.75,y+height);
    ofDrawLine(x+width*0.75,y+height,x+width,y);
    
    x=x+10;
    width=width*1.5;
    
    ofDrawLine(x,y,x+width*0.25,y+height);
    ofDrawLine(x+width*0.25,y+height,x+width*0.5,y);
    ofDrawLine(x+width*0.5,y,x+width*0.75,y+height);
    ofDrawLine(x+width*0.75,y+height,x+width,y);
    
    x=x+10;
    width=width*1.5;
    
    ofDrawLine(x,y,x+width*0.25,y+height);
    ofDrawLine(x+width*0.25,y+height,x+width*0.5,y);
    ofDrawLine(x+width*0.5,y,x+width*0.75,y+height);
    ofDrawLine(x+width*0.75,y+height,x+width,y);
    

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
