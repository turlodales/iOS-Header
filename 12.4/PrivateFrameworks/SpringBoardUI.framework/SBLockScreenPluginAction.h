//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSAction, NSString;

@interface SBLockScreenPluginAction : NSObject
{
    BSAction *_action;
    NSString *_label;
    long long _authenticationPolicy;
    CDUnknownBlockType _completion;
}

+ (id)actionWithCompletion:(CDUnknownBlockType)arg1;
+ (id)action;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) long long authenticationPolicy; // @synthesize authenticationPolicy=_authenticationPolicy;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)sendResponseWithSuccess:(_Bool)arg1;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (_Bool)isCallAction;
- (_Bool)isInCallAction;
- (_Bool)isApplicationAction;
- (_Bool)isEmergencyDialerAction;

@end

