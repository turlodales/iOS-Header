//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSSmartQuoteOptions : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_leftSingleQuote;
    NSString *_rightSingleQuote;
    NSString *_apostrophe;
    NSString *_leftDoubleQuote;
    NSString *_rightDoubleQuote;
}

+ (_Bool)supportsSecureCoding;
+ (id)smartQuoteOptionsForLocale:(id)arg1;
@property(readonly, copy) NSString *rightDoubleQuote;
@property(readonly, copy) NSString *leftDoubleQuote;
@property(readonly, copy) NSString *apostrophe;
@property(readonly, copy) NSString *rightSingleQuote;
@property(readonly, copy) NSString *leftSingleQuote;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithLeftSingleQuote:(id)arg1 rightSingleQuote:(id)arg2 apostrophe:(id)arg3 leftDoubleQuote:(id)arg4 rightDoubleQuote:(id)arg5;

@end

