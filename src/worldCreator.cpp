//
//  worldCreator.cpp
//  008
//
//  Created by nicola bertelloni on 08/11/2018.
//

#include "worldCreator.hpp"

//--------------------------------------------------------------
void WorldCreator::setup(){
  box2d.init();
  box2d.createBounds();
  box2d.setFPS(60.0);
}

//--------------------------------------------------------------
void WorldCreator::update(){
  box2d.setGravity(0, 0);
  box2d.update();
}

//--------------------------------------------------------------
void WorldCreator::draw(){
}
