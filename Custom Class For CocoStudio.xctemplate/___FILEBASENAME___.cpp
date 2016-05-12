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

bool ___FILEBASENAME___::init() {
    if (!Node::init()) {
        return false;
    }

    // load the character animation timeline
    this->timeline = CSLoader::createTimeline("___FILEBASENAME___.csb");
    // retain the character animation timeline so it doesn't get deallocated
    this->timeline->retain();

    return true;
}

#pragma mark - Private methods

#pragma mark View lifecycle

void ___FILEBASENAME___::onEnter()
{
    Node::onEnter();
}

void ___FILEBASENAME___::onExit()
{
    Node::onExit();
}
