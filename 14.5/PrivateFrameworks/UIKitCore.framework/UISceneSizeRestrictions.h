//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIWindowScene;

@interface UISceneSizeRestrictions : NSObject
{
    _Bool _hasAutomaticMinimumSize;
    _Bool _hasAutomaticMaximumSize;
    UIWindowScene *_scene;
    struct CGSize _minimumSize;
    struct CGSize _maximumSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize maximumSize; // @synthesize maximumSize=_maximumSize;
@property(nonatomic) struct CGSize minimumSize; // @synthesize minimumSize=_minimumSize;
- (id)_initWithScene:(id)arg1;

@end

