//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SDLockHandler : NSObject
{
}

+ (void)_deviceLockSetup;
+ (_Bool)unlockedSinceBoot;
+ (_Bool)migrationComplete;
+ (_Bool)deviceFirstUnlockedInSB;
+ (_Bool)deviceFirstUnlockedInMKB;
+ (_Bool)deviceUnlocked;
+ (void)setupHandlerWithIndexQueue:(id)arg1 pipelineOnly:(_Bool)arg2 indexEnabled:(_Bool)arg3 delegate:(id)arg4;

@end

