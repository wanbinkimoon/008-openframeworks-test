//
//  grigliata.hpp
//  006
//
//  Created by nicola bertelloni on 02/11/2018.
//

#include "ofMain.h"

class Cell {
  public:
    int width;
    int height;
    int centerX;
    int centerY;
    int rows;
    int cols;
};


class GrigliataClass : public ofBaseApp{
  
public:
  Cell cell;
  void cellSetup(int rows, int cols);
  void draw(Cell cell, std::function<void()> element);

};

