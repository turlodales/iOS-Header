//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSCopying-Protocol.h>
#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOPDMapsIdentifier, NSData;

@interface GEOMapItemIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    GEOPDMapsIdentifier *_mapsIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)mapItemIdentifiersFromMapsIdentifiers:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *comparableRepresentation;
- (_Bool)isEqualToGEOMapItemIdentifier:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)shortDebugDescription;
- (id)debugDescription;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic, getter=hasCoordinate) _Bool hasCoordinate;
@property(readonly, nonatomic) int resultProviderID;
@property(readonly, nonatomic) unsigned long long muid;
- (id)mapsIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithXPCCoder:(id)arg1;
- (id)initWithXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlace:(id)arg1;
- (id)initWithMapItem:(id)arg1;
- (id)initWithBasemapId:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(CDStruct_c3b9c2ee)arg3;
- (id)initWithMUID:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(CDStruct_c3b9c2ee)arg3;
- (id)initWithMUID:(unsigned long long)arg1 coordinate:(CDStruct_c3b9c2ee)arg2;
- (id)initWithMUID:(unsigned long long)arg1;
- (id)initWithMapsIdentifier:(id)arg1;
- (id)init;

@end

