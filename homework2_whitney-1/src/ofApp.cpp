#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofEnableAlphaBlending();
    
    for (int i = 0; i<100; i++){
        
        
        myObjs[i].setup();
        
        
        
        //radius[i] = ofRandom(10, 100);
        //colors[i] = ofColor(ofRandom(0,255),ofRandom(0,255),ofRandom(0,255));
        //radius[i] = ofRandom(10, 100);
        
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    


}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    
    for (int i=0; i<100; i++){
        
        if (i %2 ==0){ //even number
            ofSetCircleResolution(4);
        }
        else if(i % 5 == 0){
            ofSetCircleResolution(3);
        }
        else {
            ofSetCircleResolution(100);
        }
        myObjs[i].draw();
    }
    
    
    //for (int i=0; i<10; i++){
        //myObjs[i].draw();
    //};
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
