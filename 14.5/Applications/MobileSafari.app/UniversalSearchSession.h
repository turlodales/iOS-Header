//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/WBSParsecDSession.h>

@class WBSParsecDFeedbackDispatcher;

@interface UniversalSearchSession : WBSParsecDSession
{
}

+ (_Bool)shouldUseSearchFoundation;
+ (id)sharedSession;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) WBSParsecDFeedbackDispatcher *feedbackDispatcher; // @dynamic feedbackDispatcher;

@end

