//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrackingAvoidance/OSLogCoding-Protocol.h>
#import <TrackingAvoidance/TAEventProtocol-Protocol.h>

@class NSDate, NSString;

@interface TAGeoNavigationNotification : NSObject <OSLogCoding, TAEventProtocol>
{
    NSDate *_date;
    unsigned long long _transportType;
    unsigned long long _navState;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long navState; // @synthesize navState=_navState;
@property(readonly, nonatomic) unsigned long long transportType; // @synthesize transportType=_transportType;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)getDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)descriptionDictionary;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithTransportType:(unsigned long long)arg1 andNavigationState:(unsigned long long)arg2 date:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

