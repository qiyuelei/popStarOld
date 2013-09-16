//
//  GameBg.h
//  PopStar
//
//  Created by long shenghua on 13-9-11.
//
//

#ifndef __PopStar__GameBg__
#define __PopStar__GameBg__

#include "cocos2d.h"

USING_NS_CC;
class GameBg:public CCLayer {
    
public:
    GameBg();
    ~GameBg();
    virtual bool init();
    CREATE_FUNC(GameBg);
    
    CCSize winSize;
    CCLabelTTF* scoreTTF;
    CCLabelTTF* bestScoreTTF;
    CCLabelTTF* targetScoreTTF;
    CCLabelTTF* stageTTF;
    CCLabelTTF* selScoreTTF;
    CCSprite* curGameModeIcon;    
    
    CCLabelTTF* GetscoreTTF();
    CCLabelTTF* GetbestScoreTTF();
    CCLabelTTF* GettargetScoreTTF();
    CCLabelTTF* GetstageTTF();
    CCLabelTTF* GetselScoreTTF();
    CCSprite* GetcurGameModeIcon();

private:


};



#endif /* defined(__PopStar__GameBg__) */
