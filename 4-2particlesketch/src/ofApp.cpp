#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    for (int i=0; i<100; i++) {
        //myparticles[i].setup(ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight()));
        //myparticles[i].setup(ofGetWidth()/2, ofGetHeight()/2);
        myparticles[i].setup(mouseX, mouseY);
    }


}

//--------------------------------------------------------------
void ofApp::update(){
    
    for (int i=0; i<100; i++){
        myparticles[i].update();
    
    }


}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    
    for (int i=0; i<100; i++){
    myparticles[i].draw();
        
    }


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    
    
        //for (int i=0; i<100; i++){
            //myparticles[i].keyPressed(int key);
        //}
        

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
