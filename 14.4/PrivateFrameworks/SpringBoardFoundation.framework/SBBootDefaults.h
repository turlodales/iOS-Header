//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSDictionary, NSString;

@interface SBBootDefaults : SBAbstractSpringBoardDefaultDomain
{
}

- (void)_bindAndRegisterDefaults;

// Remaining properties
@property(nonatomic) NSDictionary *bootTransitionContext; // @dynamic bootTransitionContext;
@property(readonly, nonatomic) _Bool dontLockAfterCrash; // @dynamic dontLockAfterCrash;
@property(nonatomic) _Bool hasCompletedSynchronizingCloudCriticalData; // @dynamic hasCompletedSynchronizingCloudCriticalData;
@property(retain, nonatomic) NSString *lastRestoreIdentifier; // @dynamic lastRestoreIdentifier;
@property(retain, nonatomic) NSString *lastSystemBuildVersion; // @dynamic lastSystemBuildVersion;
@property(readonly, nonatomic) _Bool recordBootTimeTillDidFinishLaunching; // @dynamic recordBootTimeTillDidFinishLaunching;

@end

