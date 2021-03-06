//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKAction.h>

#import <OpusKit/NSSecureCoding-Protocol.h>
#import <OpusKit/OKActionMotionExports-Protocol.h>

@interface OKActionMotion : OKAction <NSSecureCoding, OKActionMotionExports>
{
    double _rotationX;
    double _rotationY;
    double _rotationZ;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)motionActionWithState:(unsigned long long)arg1 location:(struct CGPoint)arg2 touchCount:(unsigned long long)arg3 rotationX:(double)arg4 rotationY:(double)arg5 rotationZ:(double)arg6 context:(id)arg7;
+ (id)motionActionWithState:(unsigned long long)arg1 rotationX:(double)arg2 rotationY:(double)arg3 rotationZ:(double)arg4 context:(id)arg5;
@property(readonly, nonatomic) double rotationZ; // @synthesize rotationZ=_rotationZ;
@property(readonly, nonatomic) double rotationY; // @synthesize rotationY=_rotationY;
@property(readonly, nonatomic) double rotationX; // @synthesize rotationX=_rotationX;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

