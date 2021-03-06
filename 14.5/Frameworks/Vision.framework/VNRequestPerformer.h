//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/VNRequestCancelling-Protocol.h>
#import <Vision/VNTrackerProviding-Protocol.h>

@class NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface VNRequestPerformer : NSObject <VNRequestCancelling, VNTrackerProviding>
{
    NSLock *_requestLock;
    NSMutableArray *_requestsInFlight;
    NSMutableArray *_requestsPending;
    NSMutableDictionary *_sequencedRequestObservations;
    NSMutableSet *_trackerKeys;
}

- (void).cxx_destruct;
- (void)releaseTracker:(id)arg1;
- (id)trackerWithOptions:(id)arg1 error:(id *)arg2;
- (void)cancelAllRequests;
- (id)previousSequencedObservationsForRequest:(id)arg1;
- (void)recordSequencedObservationsForRequest:(id)arg1;
- (_Bool)performDependentRequests:(id)arg1 inContext:(id)arg2 onBehalfOfRequest:(id)arg3 error:(id *)arg4;
- (_Bool)performRequests:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)performRequests:(id)arg1 inContext:(id)arg2 onBehalfOfRequest:(id)arg3 error:(id *)arg4;
- (_Bool)_performOrderedRequests:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)orderedRequestsForRequests:(id)arg1;
- (id)dependencyAnalyzedRequestsForRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;
- (_Bool)_validateAndPrepareRequests:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

@end

