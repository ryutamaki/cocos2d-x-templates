//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#include "___FILEBASENAME___Reader.h"
#include "___FILEBASENAME___.h"

using namespace cocos2d;

static ___FILEBASENAME___Reader* _instance___FILEBASENAME___Reader = nullptr;

___FILEBASENAME___Reader* ___FILEBASENAME___Reader::getInstance() {
    if (!_instance___FILEBASENAME___Reader) {
        _instance___FILEBASENAME___Reader = new ___FILEBASENAME___Reader();
    }
    return _instance___FILEBASENAME___Reader;
}

void ___FILEBASENAME___Reader::purge() {
    CC_SAFE_DELETE(_instance___FILEBASENAME___Reader);
}

Node* ___FILEBASENAME___Reader::createNodeWithFlatBuffers(const flatbuffers::Table *nodeOptions) {
    ___FILEBASENAME___* node = ___FILEBASENAME___::create();
    setPropsWithFlatBuffers(node, nodeOptions);
    return node;
}
