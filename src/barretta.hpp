//
//  barretta.hpp
//  006
//
//  Created by nicola bertelloni on 02/11/2018.
//


#include "ofMain.h"
#include "soundLab.hpp"
#include "cell.h"

class BarrettaClass : public ofBaseApp{
  
public:
  void setup();
  void update();
  void draw();
  SoundLab sound;
  Cell cell;
};

