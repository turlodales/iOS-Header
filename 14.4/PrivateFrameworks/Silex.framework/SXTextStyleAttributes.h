//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/NSCopying-Protocol.h>

@class NSDictionary, NSMutableDictionary;

@interface SXTextStyleAttributes : NSObject <NSCopying>
{
    NSMutableDictionary *_mutableAttributes;
    struct _NSRange _range;
}

+ (id)attributesWithRange:(struct _NSRange)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *mutableAttributes; // @synthesize mutableAttributes=_mutableAttributes;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSDictionary *attributes;
- (void)addAttribute:(id)arg1 value:(id)arg2;
- (id)initWithRange:(struct _NSRange)arg1;

@end

