//
//  BaozhaLayer.cpp
//  popStar
//
//  Created by long shenghua on 13-9-15.
//
//

#include "BaozhaLayer.h"
Particle::Particle(){}
Particle::~Particle(){}
bool Particle::init(){
    if (CCLayerColor::initWithColor(ccc4(0, 0, 0, 0))) {
        
        //this->setTouchEnabled(true);
        return true;
    }else{
        return false;
    }
}

void Particle::ParticleExplosion(CCPoint location){
    m_emitter = CCParticleExplosion::create();
    m_emitter->retain();
    addChild(m_emitter, 10);
    
    m_emitter->setTexture( CCTextureCache::sharedTextureCache()->addImage("Icon.png") );
    
    // m_emitter->setAutoRemoveOnFinish(true);
    m_emitter->setEmissionRate(90);
    m_emitter->setStartColor(ccc4f(1, 255, 255, 255));
    m_emitter->setStartColorVar(ccc4f(0, 0, 0, 0));
    
    m_emitter->setEndColor(ccc4f(1, 255, 255, 255));
    m_emitter->setEndColorVar(ccc4f(0, 0, 0, 0));
    
   // m_emitter->setPositionType(kCCPositionTypeGrouped);
    m_emitter->setGravity(ccp(240,0));

    m_emitter->setStartSize(5);
    m_emitter->setStartSizeVar(5);
    
    m_emitter->setEndSize(0);
    m_emitter->setEndSizeVar(0);

    
     setEmitterPosition(location);
    
}
void Particle::ccTouchesEnded(CCSet *touches,CCEvent *event)
{
    CCTouch *touch = (CCTouch*)touches->anyObject();
    CCPoint location = touch->getLocationInView();
    location = this->convertTouchToNodeSpace(touch);
    
   // ParticleExplosion(location);
    //setEmitterPosition(location);
}
void Particle::setEmitterPosition(CCPoint location){
    m_emitter->setPosition(location);
}
//CCScene* Particle::scene(){
 //   CCScene* scene = CCScene::create();
  //  Particle* layer = Particle::create();
 //   scene->addChild(layer);
 //   return scene;
//}