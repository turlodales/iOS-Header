//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSData, NSDate;

@interface GEOPlannedDestination : NSObject <NSSecureCoding>
{
    NSDate *_arrivalDate;
    NSDate *_expirationDate;
    int _transportType;
    NSData *_handle;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) NSData *handle; // @synthesize handle=_handle;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(retain, nonatomic) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItemHandle:(id)arg1;
- (id)init;

@end

