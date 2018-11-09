//
//  grigliata.cpp
//  006
///Users/nicolabertelloni/Developer/of_v0.10.0/apps/everyday/008/src/barretta.hpp
//  Created by nicola bertelloni on 02/11/2018.
//

#include "grigliata.hpp"

//--------------------------------------------------------------
void Grid::cellSetup(int rows, int cols){
  cell.rows = rows;
  cell.cols = cols;
  cell.width = ofGetHeight() / rows;
  cell.height = ofGetWidth() / cols;
  cell.centerX = cell.width / 2;
  cell.centerY = cell.height / 2;
}

//--------------------------------------------------------------
void Grid::draw(Cell cell, std::function<void()> element){
  for (unsigned int i = 0; i < cell.rows; i++) {
    int x = i * cell.width + cell.centerX;
    for (unsigned j = 0; j < cell.cols; j++) {
      int y = j * cell.height + cell.centerY;
      int index = i + j * cell.width;
      ofPushMatrix();
      ofTranslate(x, y);
      element();
      ofPopMatrix();
    }
  }
}
