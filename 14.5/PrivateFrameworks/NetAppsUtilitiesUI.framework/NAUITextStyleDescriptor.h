//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetAppsUtilitiesUI/NSCopying-Protocol.h>

@class NSString;

@interface NAUITextStyleDescriptor : NSObject <NSCopying>
{
    _Bool _allowsAccessibilitySizes;
    _Bool _allowsSmallSizes;
    unsigned int _symbolicTraits;
    NSString *_textStyle;
}

+ (id)na_identity;
+ (id)defaultFontForTextStyleDescriptor:(id)arg1;
+ (id)fontWithTextStyleDescriptor:(id)arg1;
+ (id)descriptorWithTextStyle:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool allowsSmallSizes; // @synthesize allowsSmallSizes=_allowsSmallSizes;
@property(readonly, nonatomic) _Bool allowsAccessibilitySizes; // @synthesize allowsAccessibilitySizes=_allowsAccessibilitySizes;
@property(readonly, nonatomic) unsigned int symbolicTraits; // @synthesize symbolicTraits=_symbolicTraits;
@property(readonly, copy, nonatomic) NSString *textStyle; // @synthesize textStyle=_textStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2 allowsAccessibilitySizes:(_Bool)arg3 allowsSmallSizes:(_Bool)arg4;
- (id)init;
- (id)descriptorByDisallowingSmallSizes;
- (id)descriptorByDisallowingAccessibilitySizes;
- (id)descriptorByAddingSymbolicTraits:(unsigned int)arg1 removingSymbolicTraits:(unsigned int)arg2;

@end

