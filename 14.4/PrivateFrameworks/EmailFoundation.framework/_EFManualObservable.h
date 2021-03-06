//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailFoundation/EFObservable.h>

#import <EmailFoundation/EFObserver-Protocol.h>

@class NSError, NSMutableArray, NSString;

@interface _EFManualObservable : EFObservable <EFObserver>
{
    NSMutableArray *_observers;
    NSError *_failureError;
    struct os_unfair_lock_s _lock;
    _Bool _didCompleteOrFail;
}

- (void).cxx_destruct;
- (void)_removeObserver:(id)arg1;
- (_Bool)_addObserver:(id)arg1 failureError:(id *)arg2;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

