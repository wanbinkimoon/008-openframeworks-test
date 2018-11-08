//
//  Concentric.cpp
//  008
//
//  Created by nicola bertelloni on 08/11/2018.
//

#include "Concentric.hpp"

void Concentric::setupTheCustomData(){

}

// -----------------------------------------------------------

void Concentric::draw(){
    ofPushMatrix();
      ofTranslate(getPosition());
      ofRotateZDeg(getRotation());
      ofFill();
      ofSetColor(0, 100);
      ofDrawCircle(0, 0, getRadius());
    ofPopMatrix();
}
