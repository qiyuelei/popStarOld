//
//  BaozhaLayer.h
//  popStar
//
//  Created by long shenghua on 13-9-15.
//
//

#ifndef __popStar__BaozhaLayer__
#define __popStar__BaozhaLayer__

#include "cocos2d.h"
USING_NS_CC;
class Particle : public CCLayerColor
{


public:

    Particle();
    ~Particle();
    virtual bool init();
    //static CCScene* scene();
    CREATE_FUNC(Particle);
    CCParticleSystem*    m_emitter;
    CCSprite*            m_background;
    void ParticleExplosion(CCPoint location);
private:
    
    void ccTouchesEnded(CCSet *touches,CCEvent *event);
   // void DemoFirework();
    //void DemoRotFlower();
   // void ParticleExplosion(CCPoint location);
    //void ParticleFire();
    void setEmitterPosition(CCPoint location);
   // void DemoBigFlower();
};


#endif /* defined(__popStar__BaozhaLayer__) */
