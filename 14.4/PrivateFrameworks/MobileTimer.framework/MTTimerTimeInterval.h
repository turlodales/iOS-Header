//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTDictionarySerializable-Protocol.h>
#import <MobileTimer/MTTimerTime-Protocol.h>

@class NSString;

@interface MTTimerTimeInterval : NSObject <MTDictionarySerializable, MTTimerTime>
{
    double _remainingTime;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (_Bool)isEqualToTime:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTimeInterval:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

