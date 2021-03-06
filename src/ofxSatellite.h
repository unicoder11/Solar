//
//  ofxBody.h
//  Solar
//
//  Created by Patricio González Vivo on 1/18/18.
//

#pragma once

#include "ofMain.h"
#include "Astro/src/Satellite.h"

class ofxSatellite : public Satellite {
public:
    ofxSatellite();
    ofxSatellite(const TLE& _tle);
    
    void drawGeocentricTrail(ofFloatColor _color);
    void drawHeliocentricTrail(ofFloatColor _color);
    void draw(ofFloatColor _color, float _size);
    
    void clearTale();
    
    glm::vec3   getGeoPosition(DISTANCE_UNIT _type);
    glm::vec3   getHelioPosition(DISTANCE_UNIT _type);
    
    glm::vec3   m_geoC;
    glm::vec3   m_helioC;
    
protected:
    ofFloatColor    m_color;
    ofPolyline      m_geoTrail;
    ofPolyline      m_helioTrail;
};
