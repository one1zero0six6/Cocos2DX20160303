#ifndef __SCENE_101_H__
#define __SCENE_101_H__

#include "cocos2d.h"

class Scene101 : public cocos2d::Layer
{
private:
	cocos2d::Sprite *cuberbtn;
	cocos2d::Sprite *replaybtn;
	cocos2d::Sprite *returnbtn;
	cocos2d::Sprite *redbean;/////////////////////////
	cocos2d::Rect    rectBean;//////////////////////
	cocos2d::Rect    rectCuber;
	cocos2d::Rect    rectReplay;
	cocos2d::Rect    rectReturn;

	cocos2d::Point v_TouchMoveDirect;
	bool b_Beantouch;//

					 //POINT v_TouchMoveDirect;

	int  _sceneno;
	char _cSceneNo[10];

public:
	static cocos2d::Scene* createScene();

	virtual bool init();
	void doStep(float dt);

	//Ä²¸I
	cocos2d::EventListenerTouchOneByOne *_listener1;
	bool onTouchBegan(cocos2d::Touch *pTouch, cocos2d::Event *pEvent); //
	void onTouchMoved(cocos2d::Touch *pTouch, cocos2d::Event *pEvent); //
	void onTouchEnded(cocos2d::Touch *pTouch, cocos2d::Event *pEvent); //

																	   // implement the "static create()" method manually
	CREATE_FUNC(Scene101);
};

#endif // __SCENE_101_H__