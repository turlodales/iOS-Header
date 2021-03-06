//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/NSCopying-Protocol.h>
#import <WeatherFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface WFAQIScaleCategory : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_categoryName;
    NSString *_color;
    NSString *_glyph;
    NSString *_recommendation;
    unsigned long long _categoryNumber;
    unsigned long long _categoryIndex;
    NSString *_localizedCategoryDescription;
    struct _NSRange _range;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *localizedCategoryDescription; // @synthesize localizedCategoryDescription=_localizedCategoryDescription;
@property(nonatomic) unsigned long long categoryIndex; // @synthesize categoryIndex=_categoryIndex;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) unsigned long long categoryNumber; // @synthesize categoryNumber=_categoryNumber;
@property(copy, nonatomic) NSString *recommendation; // @synthesize recommendation=_recommendation;
@property(copy, nonatomic) NSString *glyph; // @synthesize glyph=_glyph;
@property(copy, nonatomic) NSString *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToScaleCategory:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCategoryIndex:(unsigned long long)arg1 localizedCategoryDescription:(id)arg2;

@end

