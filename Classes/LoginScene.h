﻿#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__
#include "network/HttpClient.h"

using namespace cocos2d::network;
#include "ui/CocosGUI.h"
#include "network/HttpClient.h"
#include <string>
#include <vector>
using std::vector;
using std::string;
using namespace cocos2d::ui;
using namespace cocos2d::network;
#include "cocos2d.h"

class LoginScene : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();

    // implement the "static create()" method manually
    CREATE_FUNC(LoginScene);

	void onclick(cocos2d::Ref* p);

	void LoginScene::onHttpComplete(HttpClient* sender, HttpResponse* response);
private:
    float visibleHeight;
    float visibleWidth;
    TextField * textField;
	TextField* name;
};

#endif // __HELLOWORLD_SCENE_H__
