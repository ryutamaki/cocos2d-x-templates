//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#include "___FILEBASENAME___.h"

USING_NS_CC;

static ___FILEBASENAMEASIDENTIFIER___* shared___FILEBASENAMEASIDENTIFIER___;
___FILEBASENAMEASIDENTIFIER___* ___FILEBASENAMEASIDENTIFIER___::getInstance()
{
    if (!shared___FILEBASENAMEASIDENTIFIER___) {
        shared___FILEBASENAMEASIDENTIFIER___ = new ___FILEBASENAMEASIDENTIFIER___();
    }

    return shared___FILEBASENAMEASIDENTIFIER___;
}

#pragma mark - Constructor and Destructor

___FILEBASENAMEASIDENTIFIER___::___FILEBASENAMEASIDENTIFIER___()
{
}

___FILEBASENAMEASIDENTIFIER___::~___FILEBASENAMEASIDENTIFIER___()
{
}
