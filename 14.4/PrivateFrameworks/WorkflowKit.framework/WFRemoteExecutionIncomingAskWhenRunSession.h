//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFRemoteExecutionSession.h>

@class NSDictionary, NSSet;

@interface WFRemoteExecutionIncomingAskWhenRunSession : WFRemoteExecutionSession
{
    NSSet *_lastKnownDestinations;
    NSDictionary *_lastKnownOptions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *lastKnownOptions; // @synthesize lastKnownOptions=_lastKnownOptions;
@property(retain, nonatomic) NSSet *lastKnownDestinations; // @synthesize lastKnownDestinations=_lastKnownDestinations;
- (id)missingParameterError;
- (void)finishWithError:(id)arg1;
- (void)handleTimeout;
- (void)sendResponse:(id)arg1 destinations:(id)arg2 options:(id)arg3;
- (void)handleIncomingProtobuf:(id)arg1 currentlyActiveSessions:(id)arg2 responseDestinations:(id)arg3 responseOptions:(id)arg4;

@end

