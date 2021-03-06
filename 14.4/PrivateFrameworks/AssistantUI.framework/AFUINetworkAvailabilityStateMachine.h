//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantUI/AFUIStateMachineDelegate-Protocol.h>
#import <AssistantUI/RadiosPreferencesDelegate-Protocol.h>

@class AFUIStateMachine, NSString, RadiosPreferences;
@protocol AFUINetworkAvailabilityStateMachineDelegate;

@interface AFUINetworkAvailabilityStateMachine : NSObject <AFUIStateMachineDelegate, RadiosPreferencesDelegate>
{
    id <AFUINetworkAvailabilityStateMachineDelegate> _delegate;
    RadiosPreferences *_radioPreferences;
    AFUIStateMachine *_stateMachine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AFUIStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) RadiosPreferences *radioPreferences; // @synthesize radioPreferences=_radioPreferences;
@property(nonatomic) __weak id <AFUINetworkAvailabilityStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_performTransitionForEvent:(long long)arg1;
- (id)stateMachine:(id)arg1 descriptionForEvent:(long long)arg2;
- (void)stateMachine:(id)arg1 didTransitionFromState:(long long)arg2 forEvent:(long long)arg3;
- (long long)_state;
- (id)_stateMachine;
- (void)_siriNetworkAvailabilityDidChange:(unsigned long long)arg1;
- (void)siriNetworkAvailabilityDidChange;
- (void)airplaneModeChanged;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

