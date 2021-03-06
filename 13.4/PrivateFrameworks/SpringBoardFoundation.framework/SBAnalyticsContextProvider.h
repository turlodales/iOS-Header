//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFAnalyticsBackendEventContextProviding-Protocol.h>

@class NSString, SBFAnalyticsBackend, SBSAnalyticsState;

@interface SBAnalyticsContextProvider : NSObject <SBFAnalyticsBackendEventContextProviding>
{
    SBSAnalyticsState *_eventPayload;
    SBFAnalyticsBackend *_backend;
}

- (void).cxx_destruct;
- (void)stateForQueryName:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SBSAnalyticsState *eventPayload;
- (id)initWithEventPayload:(id)arg1 backend:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

