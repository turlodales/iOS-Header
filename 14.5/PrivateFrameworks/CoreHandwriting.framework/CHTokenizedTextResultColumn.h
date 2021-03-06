//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/NSCopying-Protocol.h>
#import <CoreHandwriting/NSMutableCopying-Protocol.h>
#import <CoreHandwriting/NSSecureCoding-Protocol.h>

@class NSArray, NSIndexSet;

@interface CHTokenizedTextResultColumn : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSArray *_tokenRows;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *tokenRows; // @synthesize tokenRows=_tokenRows;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTokenizedTextResultColumn:(id)arg1;
@property(readonly, nonatomic) NSIndexSet *strokeIndexes;
- (_Bool)containsStartingTokenEquivalentToToken:(id)arg1;
- (long long)indexOfEquivalentTokenRow:(id)arg1 tokenRange:(struct _NSRange)arg2;
- (id)description;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTokenRows:(id)arg1;
- (id)init;

@end

