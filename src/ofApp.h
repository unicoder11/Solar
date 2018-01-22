#pragma once

#include "ofMain.h"

#include "ofxSyphon.h"

#define GEOIP_DB "GeoLiteCity.dat"
#define GEOLOC_FILE "geoLoc.csv"

#include "Astro/src/Observer.h"
#include "Astro/src/Luna.h"
#include "ofxBody.h"

#define TIME_ANIMATION

struct Line {
    ofPoint A;
    ofPoint B;
    ofPoint T;
    std::string text;
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
    
    ofxSyphonServer syphon;
    
    // Observers
    Observer    obs;
    ofEasyCam   cam;
    
    // Bodies
    Body        sun;
    Luna        luna;
    ofxBody     moon;
    vector<ofxBody> planets;
    
    // Ecliptical
    ofPoint toEarth;
    
    // Equatorial
    ofPoint n_pole, v_equi, s_sols;
    
    // HUD
    vector<Line> lines;
    std::string date;
    
    double      scale;
    
    // Time
    double      day, prevDay;
    int         month, prevMonth;
    int         year;
    bool        bWriten;
};
