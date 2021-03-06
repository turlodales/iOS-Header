//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CARSessionObserving-Protocol.h"

@class CARSessionStatus, NSArray, NSString;

@interface CRInstrumentClusterURLManager : NSObject <CARSessionObserving>
{
    CARSessionStatus *_sessionStatus;
    NSArray *_urlStrings;
    NSArray *_sessionURLStrings;
}

+ (id)_bundlesToReadInfoKeys;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *sessionURLStrings; // @synthesize sessionURLStrings=_sessionURLStrings;
@property(retain, nonatomic) NSArray *urlStrings; // @synthesize urlStrings=_urlStrings;
@property(retain, nonatomic) CARSessionStatus *sessionStatus; // @synthesize sessionStatus=_sessionStatus;
- (void)sessionDidDisconnect:(id)arg1;
- (void)sessionDidConnect:(id)arg1;
- (void)_notifyURLsDidChange;
- (void)_applySessionURLs:(id)arg1;
@property(readonly, nonatomic) NSArray *sessionInstrumentClusterURLs;
@property(readonly, nonatomic) NSArray *instrumentClusterURLs;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

