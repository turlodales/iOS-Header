//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/NSGlyphInfo.h>

#import <UIFoundation/NSSecureCoding-Protocol.h>

@interface NSCTGlyphInfo : NSGlyphInfo <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)characterCollection;
- (unsigned long long)characterIdentifier;
- (unsigned int)_glyph;
- (id)glyphName;
- (id)_baseString;
- (unsigned int)_glyphForFont:(id)arg1 baseString:(id)arg2;
- (unsigned long long)retainCount;
- (_Bool)retainWeakReference;
- (_Bool)allowsWeakReference;
- (oneway void)release;
- (id)retain;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)_cfTypeID;

@end

