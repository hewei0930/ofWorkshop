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
    
    ofSeedRandom(mouseX);
    
    float x = 100;
    float y = 100;
    
    for (int j=0; j<6; j++){
        x = 100;
        ofPolyline temp;
            for (int i = 0; i < 71; i++){
                //temp.addVertex(  100+ofRandom(0,60), 100+ofRandom(0,60) );
                x = x + ofRandom(0,6);
                //y = y + ofRandom(0,60);
                float time = ofGetElapsedTimef();
                float start = -30;
                float xMove = ofRandom(20, 40);
                float yMove = ofMap(sin(0.05*time*ofRandom(-25,20)), -1
                                    , 1, -25, 20);
                //float yMove = ofRandom(-25,20);
                    if (i % 2 == 0){
                        start = 30;
                        xMove = ofRandom(-5,0);
                        yMove = ofRandom(-5,5);
                    }
                y = start + yMove;
                   cout<< x << endl;
                   cout<< y << endl;
                temp.addVertex(x + i*8 + xMove, 120 + y + j*100);
            }
            temp.draw();
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
