//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class EDResources;

__attribute__((visibility("hidden")))
@interface EDColorReference : NSObject <NSCopying>
{
    EDResources *mResources;
    int mSystemColorID;
    unsigned long long mColorIndex;
    unsigned long long mThemeIndex;
    double mTint;
}

+ (id)colorReferenceWithColor:(id)arg1 resources:(id)arg2;
+ (id)colorReferenceWithResources:(id)arg1;
+ (id)colorReferenceWithThemeIndex:(unsigned long long)arg1 tint:(double)arg2 resources:(id)arg3;
+ (id)colorReferenceWithColorIndex:(unsigned long long)arg1 resources:(id)arg2;
+ (id)colorReferenceWithSystemColorID:(int)arg1 resources:(id)arg2;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isValid;
- (id)color;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToColorReference:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColor:(id)arg1 resources:(id)arg2;
- (id)initWithResources:(id)arg1;
- (double)tint;
- (unsigned long long)themeIndex;
- (unsigned long long)colorIndex;
- (int)systemColorID;

@end

