//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/GCMicroGamepad.h>

#import <GameController/CoalescableMicroGamepad-Protocol.h>
#import <GameController/DigitizerValueChangedDelegate-Protocol.h>

@class GCControllerDirectionPad, NSString;

@interface GCDirectionalGamepad : GCMicroGamepad <CoalescableMicroGamepad, DigitizerValueChangedDelegate>
{
    unsigned long long _owner;
    long long _deviceType;
}

@property(nonatomic) unsigned long long owner;
@property(nonatomic) long long deviceType;
- (_Bool)reportsAbsoluteDpadValues;
- (void)setReportsAbsoluteDpadValues:(_Bool)arg1;
- (_Bool)allowsRotation;
- (void)setAllowsRotation:(_Bool)arg1;
- (id)initWithIdentifier:(id)arg1;
- (_Bool)ownershipClaimingElementsZero;
- (void)digitizerTouchUp:(id)arg1 timestamp:(unsigned long long)arg2 forceSkipDpadRotation:(_Bool)arg3;
- (void)digitizerTouchEvent:(id)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4 forceSkipDpadRotation:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) GCControllerDirectionPad *dpad;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

