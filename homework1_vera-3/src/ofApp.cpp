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
    
    ofSetColor(0, 0, 255);
    // how to fill the color?
    
    ofSeedRandom(mouseX);
    
    for (int i = 0; i < 28; i++){
        for (int j=0; j < 6; j++){
            
            // ofPolyline(const vector<10> &verts);
            
            ofPoint a = ofPoint(i*30+100, j*90+130);
            ofPoint b = ofPoint(i*30+130, j*90+100);
            ofPoint c = ofPoint(i*30+130, j*90+130);

            a.x = a.x + ofRandom (-5,5);
            b.x = b.x + ofRandom (-10,10);
            b.y = b.y + ofRandom (-35,10);
            //c.x = c.x + ofRandom (-5,5);
            //b.y = b.y + ofSignedNoise(i*mouseX*0.01)*50;
            //b.x = b.x + ofNoise(i*mouseX*0.01)*50;

            ofDrawLine(a, b);
            //ofDrawLine(b, a+i);
            ofDrawLine(b, c);
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
