//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASCAppOfferStateService-Protocol.h"

@class MISSING_TYPE;

@interface _TtC19appstorecomponentsd19AppOfferStateClient : NSObject <ASCAppOfferStateService>
{
    MISSING_TYPE *objectGraph;
    MISSING_TYPE *appStateController;
    MISSING_TYPE *arcadeSubscription;
    MISSING_TYPE *restrictions;
    MISSING_TYPE *jsStackManager;
    MISSING_TYPE *localizer;
    MISSING_TYPE *delegate;
    MISSING_TYPE *stateLock;
    MISSING_TYPE *observations;
    MISSING_TYPE *isUpdatingArcadeSubscription;
}

- (void).cxx_destruct;
- (id)init;
- (void)reinstallWatchSystemAppWithBundleID:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (void)reinstallWatchAppWithID:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (void)performActionOfOffer:(id)arg1 withActivity:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;
- (void)stopObservingStateOfOffers:(id)arg1;
- (void)startObservingStateOfOffers:(id)arg1;
- (void)dealloc;

@end

