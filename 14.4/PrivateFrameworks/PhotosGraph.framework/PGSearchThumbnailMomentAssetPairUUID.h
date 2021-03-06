//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/NSCoding-Protocol.h>
#import <PhotosGraph/NSSecureCoding-Protocol.h>

@class NSString;

@interface PGSearchThumbnailMomentAssetPairUUID : NSObject <NSSecureCoding, NSCoding>
{
    NSString *_assetUUID;
    NSString *_momentUUID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *momentUUID; // @synthesize momentUUID=_momentUUID;
@property(readonly, nonatomic) NSString *assetUUID; // @synthesize assetUUID=_assetUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAssetUUID:(id)arg1 momentUUID:(id)arg2;

@end

