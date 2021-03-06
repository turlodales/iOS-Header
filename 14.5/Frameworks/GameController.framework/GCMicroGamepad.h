//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/GCPhysicalInputProfile.h>

#import <GameController/NSSecureCoding-Protocol.h>

@class GCController, GCControllerButtonInput, GCControllerDirectionPad;

@interface GCMicroGamepad : GCPhysicalInputProfile <NSSecureCoding>
{
    CDUnknownBlockType _valueChangedHandler;
    long long _deviceType;
    _Bool _reportsAbsoluteDpadValues;
    _Bool _allowsRotation;
    GCControllerButtonInput *_button0;
    GCControllerButtonInput *_button1;
    GCControllerDirectionPad *_dpad;
    GCControllerButtonInput *_buttonMenu;
}

+ (id)_current;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool allowsRotation; // @synthesize allowsRotation=_allowsRotation;
@property(nonatomic) _Bool reportsAbsoluteDpadValues; // @synthesize reportsAbsoluteDpadValues=_reportsAbsoluteDpadValues;
@property(readonly, nonatomic) GCControllerButtonInput *buttonMenu; // @synthesize buttonMenu=_buttonMenu;
@property(readonly, nonatomic) GCControllerDirectionPad *dpad; // @synthesize dpad=_dpad;
@property(copy, nonatomic) CDUnknownBlockType valueChangedHandler; // @synthesize valueChangedHandler=_valueChangedHandler;
@property(readonly, nonatomic) GCControllerButtonInput *buttonX; // @synthesize buttonX=_button1;
@property(readonly, nonatomic) GCControllerButtonInput *buttonA; // @synthesize buttonA=_button0;
- (void)_triggerValueChangedHandlerForElement:(id)arg1 queue:(id)arg2;
- (void)setStateFromMicroGamepad:(id)arg1;
- (id)name;
- (id)saveSnapshot;
- (id)buttonB;
- (id)button1;
- (id)button0;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)setLastEventTimestamp:(double)arg1;
- (void)handleEvent:(struct __IOHIDEvent *)arg1;
- (void)microControllerWithDigitizerX:(float)arg1 digitizerY:(float)arg2 timestamp:(unsigned long long)arg3 touchDown:(_Bool)arg4;
- (id)productCategory;
- (_Bool)supportsDpadTaps;

// Remaining properties
@property(readonly, nonatomic) __weak GCController *controller; // @dynamic controller;

@end

