//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SIMToolkitUI/STKAlertSession.h>

@class STKSessionBehavior;

@interface STKSIMToolkitAlertSession : STKAlertSession
{
    long long _event;
    STKSessionBehavior *_behavior;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) STKSessionBehavior *behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) long long event; // @synthesize event=_event;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)sendSuccessWithSelectedIndex:(unsigned long long)arg1;
- (void)sendResponse:(long long)arg1 withBOOLResult:(_Bool)arg2;
- (id)initWithLogger:(id)arg1 responseProvider:(id)arg2 event:(long long)arg3 options:(id)arg4 behavior:(id)arg5 sound:(id)arg6;

@end

