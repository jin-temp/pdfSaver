#pragma once

#include "ofMain.h"
#include "ofxGui.h"

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
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        void saveButtonPressed();
    
    
        vector <ofImage> frames;
        ofVideoGrabber grabber;
    
        vector <ofRectangle> dropZoneRects;
        vector <ofImage> images;
        vector <ofPoint> boxTrail;
    
        ofTrueTypeFont font;
    
        bool oneShot;
        bool pdfRendering;
        bool bHide;

    
        float angle;
    	ofxButton saveButton;
        ofxToggle renderToggle;
        ofxColorSlider color;
        ofxPanel gui;
    

		
};
