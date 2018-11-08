//
//  grigliata.cpp
//  006
//
//  Created by nicola bertelloni on 02/11/2018.
//

#include "grigliata.hpp"

//--------------------------------------------------------------
void GrigliataClass::setup(){
  
}

//--------------------------------------------------------------
void GrigliataClass::update(){
  
}

//--------------------------------------------------------------
void GrigliataClass::draw(int grid, std::function<void()> element){
  int cell = ofGetHeight() / grid;
  int offset = cell / 2;
  for (unsigned int i = 0; i < grid; i++) {
    int x = i * cell + offset;
    for (unsigned j = 0; j < grid; j++) {
      int y = j * cell + offset;
      ofPushMatrix();
      ofTranslate(x, y);
      element();
      ofPopMatrix();
    }
  }
}
