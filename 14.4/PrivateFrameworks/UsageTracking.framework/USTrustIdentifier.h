//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UsageTracking/NSCopying-Protocol.h>
#import <UsageTracking/NSSecureCoding-Protocol.h>

@class NSString;

@interface USTrustIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _trusted;
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)identifierWithIdentifier:(id)arg1 trusted:(_Bool)arg2;
- (void).cxx_destruct;
@property(readonly) _Bool trusted; // @synthesize trusted=_trusted;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)_USTrustIdentifierCommonInitWithIdentifier:(id)arg1 trusted:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 trusted:(_Bool)arg2;

@end

