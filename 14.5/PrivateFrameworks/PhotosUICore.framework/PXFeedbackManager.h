//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PXFeedbackCollector, PXFeedbackSender;

@interface PXFeedbackManager : NSObject
{
    unsigned long long _feedbackCollectionType;
    PXFeedbackCollector *_feedbackCollector;
    PXFeedbackSender *_feedbackSender;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) PXFeedbackSender *feedbackSender; // @synthesize feedbackSender=_feedbackSender;
@property(readonly, nonatomic) PXFeedbackCollector *feedbackCollector; // @synthesize feedbackCollector=_feedbackCollector;
- (void)removeFeedbackEntry:(id)arg1;
- (void)provideUserFeedbackEntry:(id)arg1;
- (id)provideUserFeedbackFromDictionary:(id)arg1 forFeedbackType:(unsigned long long)arg2;
- (id)init;

@end

