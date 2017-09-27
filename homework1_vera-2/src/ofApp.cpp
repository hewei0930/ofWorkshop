#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    gui.setup();
    gui.add(randomMin.setup("random minium", 0, 0, -30));
    gui.add(randomMax.setup("random maximum", 0, 0, 30));
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    gui.draw();
    
    ofBackground(255);
    
    
    ofSetColor(0);
    // how to fill the color?
    
    ofSeedRandom(mouseX);
    
    
    
    
    for (int i = 0; i < 12; i++){
        for (int j=0; j < 12; j++){
            
            //ofPoint a = ofPoint(i*50+100, j*50+100);
            //ofPoint b = ofPoint(i*50+100, j*50+130);
            //ofPoint c = ofPoint(i*50+130, j*50+130);
            //ofPoint d = ofPoint(i*50+130, j*50+100);
            
            //a.x = a.x + ofRandom (-30,30);
            //b.x = b.x + ofRandom (-30,30);
            //c.x = c.x + ofRandom (-30,30);
            //d.x = d.x + ofRandom (-30,30);
            
            //ofDrawLine(a, b);
            //ofDrawLine(b, c);
            //ofDrawLine(c, d);
            //ofDrawLine(d, a);
            
            //------------------------
            //ofFill();
            //ofBeginShape();
            //ofVertex( 50,50);
            //ofVertex( 200,50);
            //ofVertex( 100,100);
            //ofVertex( 50,100);
            //ofEndShape();
            
            //ofFill();
            //ofBeginShape();
            //ofVertex( 100+i*50+ofRandom(-30,30),100+j*50);
            //ofVertex( 100+i*50+ofRandom(-30,30),130+j*50);
            //ofVertex( 130+i*50+ofRandom(-30,30),130+j*50);
            //ofVertex( 130+i*50+ofRandom(-30,30),100+j*50);
            //ofEndShape();
            
            ofFill();
            ofBeginShape();
            ofVertex( 100+i*50+ofRandom(randomMin,randomMax),100+j*50+ofRandom(-30,30));
            ofVertex( 100+i*50+ofRandom(-30,30),130+j*50+ofRandom(-30,30));
            ofVertex( 130+i*50+ofRandom(-30,30),130+j*50+ofRandom(-30,30));
            ofVertex( 130+i*50+ofRandom(-30,30),100+j*50+ofRandom(-30,30));
            ofEndShape();
            
            
        
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
