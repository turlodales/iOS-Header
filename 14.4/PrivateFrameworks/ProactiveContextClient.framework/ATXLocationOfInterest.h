//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveContextClient/NSCopying-Protocol.h>
#import <ProactiveContextClient/NSSecureCoding-Protocol.h>

@class NSArray, NSUUID;

@interface ATXLocationOfInterest : NSObject <NSSecureCoding, NSCopying>
{
    NSUUID *_uuid;
    NSArray *_visits;
    long long _type;
    struct CLLocationCoordinate2D _coordinate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSArray *visits; // @synthesize visits=_visits;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToLocation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)addVisitFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)init;
- (id)initWithUUID:(id)arg1 visits:(id)arg2 coordinate:(struct CLLocationCoordinate2D)arg3;
- (id)initWithUUID:(id)arg1 visits:(id)arg2 coordinate:(struct CLLocationCoordinate2D)arg3 type:(long long)arg4;

@end

