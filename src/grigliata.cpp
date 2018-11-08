//
//  grigliata.cpp
//  006
//
//  Created by nicola bertelloni on 02/11/2018.
//

#include "grigliata.hpp"

//--------------------------------------------------------------
void GrigliataClass::cellSetup(int rows, int cols){
  cell.rows = rows;
  cell.cols = cols;
  cell.width = ofGetHeight() / rows;
  cell.height = ofGetWidth() / cols;
  cell.centerX = cell.width / 2;
  cell.centerY = cell.height / 2;
}

//--------------------------------------------------------------
void GrigliataClass::draw(Cell cell, std::function<void()> element){
  for (unsigned int i = 0; i < cell.rows; i++) {
    int x = i * cell.width + cell.centerX;
    for (unsigned j = 0; j < cell.cols; j++) {
      int y = j * cell.height + cell.centerY;
      ofPushMatrix();
      ofTranslate(x, y);
      element();
      ofPopMatrix();
    }
  }
}
