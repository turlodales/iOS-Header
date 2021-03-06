//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSOrientationUpdate : NSObject
{
    long long _orientation;
    double _duration;
    long long _rotationDirection;
    unsigned long long _sequenceNumber;
}

@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) long long rotationDirection; // @synthesize rotationDirection=_rotationDirection;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (id)description;
- (id)initWithOrientation:(long long)arg1 sequenceNumber:(unsigned long long)arg2 duration:(double)arg3 rotationDirection:(long long)arg4;
- (id)init;

@end

