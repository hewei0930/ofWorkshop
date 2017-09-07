#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myparticle.setup(100,200);
    myparticle2.setup(200,400);

}

//--------------------------------------------------------------
void ofApp::update(){
    myparticle.update();
    myparticle2.update();


}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    
    myparticle.draw();
    myparticle2.draw();


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
