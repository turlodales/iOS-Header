//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCJSONEncodableObjectProviding-Protocol.h>
#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSSet, NTPBPersonalizationWhitelist;

@interface FCPersonalizationWhitelist : NSObject <NSSecureCoding, NSCopying, FCJSONEncodableObjectProviding>
{
    NTPBPersonalizationWhitelist *_pbWhitelist;
    NSSet *_portraitDisabledTagIDs;
    NSDictionary *_whitelist;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *whitelist; // @synthesize whitelist=_whitelist;
@property(retain, nonatomic) NSSet *portraitDisabledTagIDs; // @synthesize portraitDisabledTagIDs=_portraitDisabledTagIDs;
- (id)jsonEncodableObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) NSDictionary *optionalTags;
@property(readonly, nonatomic) NSDictionary *defaultTags;
- (id)init;
- (id)initWithPBPersonalizationWhitelist:(id)arg1;

@end

