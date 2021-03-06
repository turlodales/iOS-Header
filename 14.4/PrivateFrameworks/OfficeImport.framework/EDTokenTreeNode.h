//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDTokenTreeNode : NSObject
{
    unsigned int mTokenIndex;
    int mTokenType;
    EDTokenTreeNode *mFirstChild;
    EDTokenTreeNode *mSibling;
}

+ (id)tokenTreeNodeWithIndexAndType:(unsigned int)arg1 type:(int)arg2;
- (void).cxx_destruct;
- (id)description;
- (void)setSibling:(id)arg1;
- (id)sibling;
- (void)setFirstChild:(id)arg1;
- (id)firstChild;
- (unsigned int)tokenIndex;
- (id)initWithIndexAndType:(unsigned int)arg1 type:(int)arg2;
- (id)init;

@end

