#pragma once

#include "ofMain.h"


class Particle{
public:
    float x;
    float y;
    float velocityX;
    float velocityY;
    float speed;
    float radius;
    float time;
    ofColor colors;
    
    
    void setup(float xIn, float yIn){
        speed = ofRandom(2, 10);
        x = xIn;
        y = yIn;
        velocityX = speed;
        velocityY = speed;
        radius = ofRandom(2, 40);
        colors = ofColor(ofRandom(0, 255),ofRandom(0,255),ofRandom(0,255));
        
        time = ofGetElapsedTimef();
    }
    void update(){
        x =  x + velocityX;
        y =  y + velocityY;
        
        if (x > ofGetWidth()) {
            velocityX = -speed;
        }
        else if (x < 0) {
            velocityX = speed;
        }
        
        if (y > ofGetHeight()) {
            velocityY = -speed;
        }
        else if (y < 0) {
            velocityY = speed;
        }
    }
    void draw(){
        ofSetColor(colors);
        radius = ofMap(sin(x+time)/5, 0, 1, 4, 200);
        ofDrawCircle(x, y, radius);
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
    
    
    Particle myparticles[100];

    
		
};
