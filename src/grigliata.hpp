//
//  grigliata.hpp
//  006
//
//  Created by nicola bertelloni on 02/11/2018.
//

#include "ofMain.h"

class GrigliataClass : public ofBaseApp{
  
public:
  void setup();
  void update();
  void draw(int grid, std::function<void()> element);
};
