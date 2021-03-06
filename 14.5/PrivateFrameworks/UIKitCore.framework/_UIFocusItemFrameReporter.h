//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFocusSystem;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _UIFocusItemFrameReporter : NSObject
{
    NSObject<OS_dispatch_source> *_focusedFrameUpdateTimer;
    _Bool _hasStagedFocusFrameUpdate;
    _Bool _enabled;
    UIFocusSystem *_focusSystem;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
- (id)primaryWindow;
- (struct CGRect)_globalFrameForFocusedItemInSystem:(id)arg1;
- (struct CGRect)_clampRect:(struct CGRect)arg1 insideRect:(struct CGRect)arg2;
- (_Bool)_rect:(struct CGRect)arg1 differsFromRect:(struct CGRect)arg2 lowerThreshold:(double)arg3 upperThreshold:(double)arg4;
- (void)_cancelRepeatingFrameUpdate;
- (void)_scheduleRepeatingFrameUpdate;
- (void)_reportFocusFrameUpdateForGlobalFrame:(struct CGRect)arg1;
- (void)_reportFocusFrameForCurrentlyFocusedItem;

@end

