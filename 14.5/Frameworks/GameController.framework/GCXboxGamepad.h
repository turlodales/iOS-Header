//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/GCExtendedGamepad.h>

@class GCControllerButtonInput;

@interface GCXboxGamepad : GCExtendedGamepad
{
    GCControllerButtonInput *_paddleButton1;
    GCControllerButtonInput *_paddleButton2;
    GCControllerButtonInput *_paddleButton3;
    GCControllerButtonInput *_paddleButton4;
    long long _type;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) GCControllerButtonInput *paddleButton4; // @synthesize paddleButton4=_paddleButton4;
@property(readonly, nonatomic) GCControllerButtonInput *paddleButton3; // @synthesize paddleButton3=_paddleButton3;
@property(readonly, nonatomic) GCControllerButtonInput *paddleButton2; // @synthesize paddleButton2=_paddleButton2;
@property(readonly, nonatomic) GCControllerButtonInput *paddleButton1; // @synthesize paddleButton1=_paddleButton1;
- (void)initializeExtraControllerElements;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithController:(id)arg1;

@end

