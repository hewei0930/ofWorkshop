#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //x = 400;
    //y = 400;
    
    
    //x = 400;
    //y = 400;
    //x2 = 400;
    //y2 = 400;
    
    
    for (int i = 0; i< 100; i++){
        x[i] = ofGetWidth()/2;
        y[i] = ofGetHeight()/2;
        colors[i] = ofColor(ofRandom(0,255),ofRandom(0,255),ofRandom(0,255));
        //cout <<  colors[i] << endl;
        radius[i] = ofRandom(0, 50);
        
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    
    for (int i = 0; i< 100; i++){
        if (x[i]>ofGetWidth()-100) {
            x[i]=ofGetWidth()-100;
        }
        if (x[i]<100) {
            x[i]=100;
        }
        if (y[i]>ofGetHeight()-100) {
            y[i]=ofGetHeight()-100;
        }
        if (y[i]<100) {
            y[i]=100;
        }

    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    
    //x = x + ofRandom(-1, 1);
    //y = y + ofRandom(-1, 1);
    //ofDrawCircle(x, y, 10);
    
    
    //x = x + ofRandom(-3, 3);
    //y = y + ofRandom(-3, 3);
    //x2 = x2 + ofRandom(-3, 3);
    //y2 = y2 + ofRandom(-3, 3);
    //ofDrawCircle(x, y, 10);
    //ofDrawCircle(x2, y2, 10);
    
    float time = ofGetElapsedTimef();
    
    int red = ofMap(sin(time), -1, 1, 0, 255);
    
    
    for (int i = 0; i < 100; i++){
        
        x[i] = x[i] + ofRandom(-20, 20);
        y[i] = y[i] + ofRandom(-20, 20);
    }
    
    
    for (int i = 0; i < 100; i++){
        
        //ofSetColor( ofClamp(colors[i].r +red, 0, 255), colors[i].g ,colors[i].b);
        ofSetColor( ofClamp(colors[i].r +red, 0, 100), 0 ,colors[i].b);
        
        ofDrawCircle(x[i], y[i], radius[i]);
    }
    
  }



//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key ==' '){
        for(int i=0; i<100; i++){
            x[i] = ofGetWidth()/2;
            y[i] = ofGetHeight()/2;
            
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
