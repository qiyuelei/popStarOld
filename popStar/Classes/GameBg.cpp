//
//  GameBg.cpp
//  PopStar
//
//  Created by long shenghua on 13-9-11.
//
//

#include "GameBg.h"

GameBg::GameBg(){}
GameBg::~GameBg(){}
bool GameBg::init(){
    if (CCLayer::init()) {
        
        winSize = CCDirector::sharedDirector()->getWinSize();
        
        CCSprite* sp = CCSprite::create("game_bg.png");
        sp->setAnchorPoint(ccp(0.5,0.5));
        sp->setPosition(ccp(240,160));
        sp->setScale(0.5);
        sp->setRotation(-90);
        this->addChild(sp);
        
        scoreTTF = CCLabelTTF::create("0", "Arial", 45);
        scoreTTF->setPosition(ccp(85, 137));
       // scoreTTF->setColor(ccc3(255, 0, 0));
        scoreTTF->setRotation(-90);
        scoreTTF->setScale(0.3);
        this->addChild(scoreTTF);
        
        bestScoreTTF = CCLabelTTF::create("0", "Arial", 45);
        bestScoreTTF->setPosition(ccp(43, 172));
       // bestScoreTTF->setColor(ccc3(255, 0, 0));
        bestScoreTTF->setRotation(-90);
        bestScoreTTF->setScale(0.3);
        this->addChild(bestScoreTTF);
        
        targetScoreTTF = CCLabelTTF::create("0", "Arial", 45);
        targetScoreTTF->setPosition(ccp(85, 248));
       // targetScoreTTF->setColor(ccc3(255, 0, 0));
        targetScoreTTF->setRotation(-90);
        targetScoreTTF->setScale(0.3);
        this->addChild(targetScoreTTF);
        
        stageTTF = CCLabelTTF::create("0", "Arial", 45);
        stageTTF->setPosition(ccp(85, 50));
       // stageTTF->setColor(ccc3(255, 0, 0));
        stageTTF->setRotation(-90);
        stageTTF->setScale(0.3);
        this->addChild(stageTTF);
        
        selScoreTTF = CCLabelTTF::create("", "Arial", 45);
        selScoreTTF->setPosition(ccp(110, 160));
        selScoreTTF->setColor(ccc3(255, 0, 0));
        selScoreTTF->setRotation(-90);
        selScoreTTF->setScale(0.3);
        this->addChild(selScoreTTF);
        
        //curGameModeIcon = CCSprite::create("Icon.png");
       // curGameModeIcon->setPosition(ccp(85, 12));
       // curGameModeIcon->setScale(0.3);
       // this->addChild(curGameModeIcon);
        
        
        return true;
    }else{
        return false;
    }
}

CCLabelTTF* GameBg::GetscoreTTF(){
    return scoreTTF;
}
CCLabelTTF* GameBg::GetbestScoreTTF(){
    return bestScoreTTF;
}
CCLabelTTF* GameBg::GettargetScoreTTF(){
    return targetScoreTTF;
}
CCLabelTTF* GameBg::GetstageTTF(){
    return stageTTF;
}
CCLabelTTF* GameBg::GetselScoreTTF(){
    return selScoreTTF;
}
CCSprite* GameBg::GetcurGameModeIcon(){
    return curGameModeIcon;
}
