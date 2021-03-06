//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/TPSSerializableObject.h>

#import <TipsCore/NSCopying-Protocol.h>
#import <TipsCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString, TPSAssets;

@interface TPSContent : TPSSerializableObject <NSCopying, NSSecureCoding>
{
    _Bool _bodyContainsLink;
    long long _labelStyle;
    NSString *_title;
    NSArray *_titleContent;
    NSArray *_bodyContent;
    NSString *_bodyText;
    TPSAssets *_assets;
}

+ (id)na_identity;
+ (id)classSet;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) TPSAssets *assets; // @synthesize assets=_assets;
@property(copy, nonatomic) NSString *bodyText; // @synthesize bodyText=_bodyText;
@property(copy, nonatomic) NSArray *bodyContent; // @synthesize bodyContent=_bodyContent;
@property(copy, nonatomic) NSArray *titleContent; // @synthesize titleContent=_titleContent;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long labelStyle; // @synthesize labelStyle=_labelStyle;
@property(nonatomic) _Bool bodyContainsLink; // @synthesize bodyContainsLink=_bodyContainsLink;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1 metadata:(id)arg2;

@end

