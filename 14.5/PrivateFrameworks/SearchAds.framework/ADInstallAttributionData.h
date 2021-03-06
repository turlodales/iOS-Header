//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface ADInstallAttributionData : NSObject
{
    NSString *_version;
    NSNumber *_sourceAppAdamID;
    NSString *_adNetworkID;
    NSNumber *_campaignID;
    NSString *_uuid;
    NSNumber *_adamID;
    NSNumber *_timestamp;
    NSString *_signature;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(readonly, copy, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy, nonatomic) NSNumber *campaignID; // @synthesize campaignID=_campaignID;
@property(readonly, copy, nonatomic) NSString *adNetworkID; // @synthesize adNetworkID=_adNetworkID;
@property(readonly, copy, nonatomic) NSNumber *sourceAppAdamID; // @synthesize sourceAppAdamID=_sourceAppAdamID;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void)recordStoreKitAdTap:(CDUnknownBlockType)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDict:(id)arg1;

@end

