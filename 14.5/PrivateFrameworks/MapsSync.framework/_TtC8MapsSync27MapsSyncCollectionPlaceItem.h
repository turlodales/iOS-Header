//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSync/_TtC8MapsSync22MapsSyncCollectionItem.h>

@class GEOLatLng, GEOMapItemStorage, MISSING_TYPE, NSNumber, NSString;

@interface _TtC8MapsSync27MapsSyncCollectionPlaceItem : _TtC8MapsSync22MapsSyncCollectionItem
{
    MISSING_TYPE *_customName;
    MISSING_TYPE *_droppedPinCoordinate;
    MISSING_TYPE *_droppedPinFloorOrdinal;
    MISSING_TYPE *_mapItemStorage;
    MISSING_TYPE *_origin;
    MISSING_TYPE *_latitude;
    MISSING_TYPE *_longitude;
    MISSING_TYPE *_muid;
}

+ (void)fetchNearbyPlacesWithLatitude:(double)arg1 longitude:(double)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (id)initWithObject:(id)arg1;
- (id)initWithCollection:(id)arg1;
- (void)addEditWithBlock:(CDUnknownBlockType)arg1;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isDuplicateOfOther:(id)arg1;
@property(nonatomic, readonly) NSNumber *muid;
@property(nonatomic, readonly) NSNumber *longitude;
@property(nonatomic, readonly) NSNumber *latitude;
@property(nonatomic, readonly) short origin;
@property(nonatomic, readonly) GEOMapItemStorage *mapItemStorage;
@property(nonatomic, readonly) int droppedPinFloorOrdinal;
@property(nonatomic, readonly) GEOLatLng *droppedPinCoordinate;
@property(nonatomic, readonly) NSString *customName;
@property(nonatomic, readonly) NSString *description;
- (id)copyWithZone:(void *)arg1;

@end

