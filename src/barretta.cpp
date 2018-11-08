//
//  barretta.cpp
//  006
//
//  Created by nicola bertelloni on 02/11/2018.
//

#include "barretta.hpp"

//--------------------------------------------------------------
void BarrettaClass::setup(){
  sound.setup();
}

//--------------------------------------------------------------
void BarrettaClass::update(){
  sound.update();
}

//--------------------------------------------------------------
void BarrettaClass::draw(){
  ofSetColor(255, 100, 150);
  ofSetLineWidth(2);
  ofNoFill();
  int soundImpact = sound.scaledVol * 1000;
  int radius = ofClamp(soundImpact, 0, 40);
  for (unsigned int i = 0; i < 48; i += 4) {
    ofDrawCircle(0, 0, radius - i);
  }
}

//--------------------------------------------------------------
