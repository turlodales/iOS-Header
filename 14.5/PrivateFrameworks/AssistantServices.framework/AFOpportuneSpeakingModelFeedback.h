//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary;

@interface AFOpportuneSpeakingModelFeedback : NSObject <NSSecureCoding>
{
    NSDate *_lastNegativeFeedback;
    NSDictionary *_negativeFeedbackByContact;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *negativeFeedbackByContact; // @synthesize negativeFeedbackByContact=_negativeFeedbackByContact;
@property(retain, nonatomic) NSDate *lastNegativeFeedback; // @synthesize lastNegativeFeedback=_lastNegativeFeedback;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

