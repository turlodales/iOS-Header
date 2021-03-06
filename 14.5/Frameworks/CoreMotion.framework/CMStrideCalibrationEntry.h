//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@interface CMStrideCalibrationEntry : NSObject <NSSecureCoding, NSCopying>
{
    CDStruct_9878d8f4 _strideCalStruct;
}

+ (_Bool)supportsSecureCoding;
- (id)description;
@property(readonly, nonatomic) long long gpsSource;
@property(readonly, nonatomic) double percentGrade;
@property(readonly, nonatomic) double speed;
- (int)session;
@property(readonly, nonatomic) int steps;
@property(readonly, nonatomic) double distance;
@property(readonly, nonatomic) double endTime;
- (double)score;
- (double)kvalueTrack;
- (double)kvalue;
- (unsigned int)pacebin;
@property(readonly, nonatomic) double startTime;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCLStrideCalEntry:(CDStruct_9878d8f4)arg1;

@end

