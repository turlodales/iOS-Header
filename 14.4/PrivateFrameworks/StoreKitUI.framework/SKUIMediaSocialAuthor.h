//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface SKUIMediaSocialAuthor : NSObject <NSCopying>
{
    NSString *_authorType;
    NSString *_dsid;
    NSString *_identifier;
    NSString *_name;
    NSArray *_permissions;
    NSDictionary *_storePlatformData;
    NSURL *_thumbnailImageURL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *thumbnailImageURL; // @synthesize thumbnailImageURL=_thumbnailImageURL;
@property(copy, nonatomic) NSDictionary *storePlatformData; // @synthesize storePlatformData=_storePlatformData;
@property(copy, nonatomic) NSArray *permissions; // @synthesize permissions=_permissions;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property(copy, nonatomic) NSString *authorType; // @synthesize authorType=_authorType;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAuthorDictionary:(id)arg1;

@end

