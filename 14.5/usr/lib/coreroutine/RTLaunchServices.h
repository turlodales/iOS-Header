//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RTLaunchServices : NSObject
{
}

+ (void)createProcessAssertionForPid:(int)arg1 timeout:(double)arg2 queue:(id)arg3 timeoutHandler:(CDUnknownBlockType)arg4;
+ (_Bool)canOpenApplication:(id)arg1;
+ (void)launchClientWithBundleIdentifier:(id)arg1 restorationIdentifier:(id)arg2 eventAgentManager:(id)arg3 handler:(CDUnknownBlockType)arg4;

@end

