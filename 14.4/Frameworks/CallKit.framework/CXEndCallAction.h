//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/CXCallAction.h>

@class NSDate;

@interface CXEndCallAction : CXCallAction
{
    NSDate *_dateEnded;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *dateEnded; // @synthesize dateEnded=_dateEnded;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateAsFulfilledWithDateEnded:(id)arg1;
- (void)fulfillWithDateEnded:(id)arg1;
- (void)fulfill;
- (id)customDescription;

@end

