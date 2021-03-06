//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreNFC/NFCReaderSession.h>

#import <CoreNFC/NFReaderSessionCallbacks-Protocol.h>

@class NSString;
@protocol NFCTag;

@interface NFCTagReaderSession : NFCReaderSession <NFReaderSessionCallbacks>
{
    id _swiftDelegateWrapper;
    id <NFCTag> _connectedTag;
}

+ (_Bool)readingAvailable;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) id <NFCTag> connectedTag; // @synthesize connectedTag=_connectedTag;
- (void)didDetectTags:(id)arg1 connectedTagIndex:(unsigned long long)arg2;
- (void)_callbackDidBecomeActive;
- (void)_callbackDidInvalidateWithError:(id)arg1;
- (void)connectToTag:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)restartPolling;
- (id)initWithPollingOption:(long long)arg1 swiftDelegate:(id)arg2 queue:(id)arg3;
- (id)initWithPollingOption:(long long)arg1 delegate:(id)arg2 queue:(id)arg3;
- (id)initWithPollingOption:(long long)arg1 delegate:(id)arg2 delegateType:(long long)arg3 queue:(id)arg4;
- (id)initWithDelegate:(id)arg1 sessionDelegateType:(long long)arg2 queue:(id)arg3 pollMethod:(unsigned long long)arg4 sessionConfig:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

