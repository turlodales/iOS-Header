//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CRKSettingsUIVisibilityProvider;

__attribute__((visibility("hidden")))
@interface PSUIClassroomVisibilityArbitrator : NSObject
{
    unsigned long long _visibilityState;
    CDUnknownBlockType _visibilityStateChangeHandler;
    id <CRKSettingsUIVisibilityProvider> _visibilityProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <CRKSettingsUIVisibilityProvider> visibilityProvider; // @synthesize visibilityProvider=_visibilityProvider;
@property(copy, nonatomic) CDUnknownBlockType visibilityStateChangeHandler; // @synthesize visibilityStateChangeHandler=_visibilityStateChangeHandler;
@property(nonatomic) unsigned long long visibilityState; // @synthesize visibilityState=_visibilityState;
- (void)connectToDaemon;
- (void)reloadVisibilityState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;

@end

