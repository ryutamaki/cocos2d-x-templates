//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#include "___FILEBASENAME___.h"

USING_NS_CC;

#pragma mark - Public methods

#pragma mark Initializer

Scene* ___FILEBASENAMEASIDENTIFIER___::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();

    // 'layer' is an autorelease object
    auto layer = ___FILEBASENAMEASIDENTIFIER___::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

bool ___FILEBASENAMEASIDENTIFIER___::init()
{
    if ( !Layer::init() )
    {
        return false;
    }

    return true;
}


#pragma mark - Private methods

