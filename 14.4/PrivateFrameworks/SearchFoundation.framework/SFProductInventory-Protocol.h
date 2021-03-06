//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDate, NSDictionary, NSNumber, NSString;

@protocol SFProductInventory <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *storeAddress;
@property(copy, nonatomic) NSString *storeName;
@property(copy, nonatomic) NSDate *timestamp;
@property(nonatomic) int distanceUnit;
@property(copy, nonatomic) NSNumber *distance;
@property(nonatomic) int availabilityStatus;
@property(copy, nonatomic) NSString *storeId;
@property(nonatomic) int type;
@end

