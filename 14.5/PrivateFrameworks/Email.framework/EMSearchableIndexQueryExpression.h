//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/NSCopying-Protocol.h>

@class NSString;

@interface EMSearchableIndexQueryExpression : NSObject <NSCopying>
{
    NSString *_queryString;
}

+ (id)expressionWithQueryString:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithQueryString:(id)arg1;
- (id)init;

@end

