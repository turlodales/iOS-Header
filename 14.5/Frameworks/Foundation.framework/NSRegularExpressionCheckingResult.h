//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSTextCheckingResult.h>

@class NSArray, NSRegularExpression;

@interface NSRegularExpressionCheckingResult : NSTextCheckingResult
{
}

+ (_Bool)supportsSecureCoding;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (unsigned long long)resultType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (struct _NSRange)rangeWithName:(id)arg1;
@property(readonly) NSArray *rangeArray;
@property(readonly) NSRegularExpression *regularExpression;
- (id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2;
- (id)initWithRanges:(struct _NSRange *)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3;

@end

