#pragma once

#include "ofMain.h"

class transformObj{
    
public:
    
    ofPoint position;
    //float x;
    //float y;
    float startTime;
    float duration;
    ofColor colors;
    float radius;
    
    float time;

    
    //void setup(float xIn, float yIn){
    void setup(){
        position = ofPoint(ofRandom(0, 800),ofRandom(0, 600));
        //x = xIn;
        //y = yIn;
        startTime = ofGetElapsedTimef();
        duration = 1.5;
        colors = ofColor(ofRandom(0,255),ofRandom(0,255),ofRandom(0,255),220);
    }
    
    void draw(){
        
        time = ofGetElapsedTimef();
        
        float timeAlive = time - startTime;
        
        //if (timeAlive < duration){
            float pct = ofMap(timeAlive, 0, duration, -1, 1);
            float sinPct = sin(pct * PI);
            float radius = ofMap(sinPct, -1, 1, 0, 100);
            //float radius = ofMap(sinPct, -1, 1, 0, 100+ ofRandom(0, 10));
        //}
        
        float colorful = ofMap(sin(time), -1, 1, 0, 255);
        
            ofSetColor( ofClamp(colors.r+colorful*0.02,70,180), ofClamp(colors.g+colorful*0.1,50,200), ofClamp(colors.b+colorful*1,30,220),200);
            //ofSetColor(colors);
        
            ofDrawCircle(position.x, position.y, radius);
     
    }
};

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    transformObj myObjs[100];
};
