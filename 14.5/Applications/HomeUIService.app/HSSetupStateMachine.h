//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HSSetupStateMachine : NSObject
{
}

- (_Bool)stepRequiresIdentifyButton:(unsigned long long)arg1 withCoordinator:(id)arg2 configuration:(id)arg3;
- (_Bool)stepRequiresDismissalConfirmation:(unsigned long long)arg1 withCoordinator:(id)arg2 configuration:(id)arg3;
- (_Bool)_sync_shouldSkipStep:(unsigned long long)arg1 withConfiguration:(id)arg2;
- (id)shouldSkipStep:(unsigned long long)arg1 withConfiguration:(id)arg2;
- (unsigned long long)stepFollowingStep:(unsigned long long)arg1 withConfiguration:(id)arg2;
- (Class)configurationObjectClass;

@end

