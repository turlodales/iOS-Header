//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/MDSearchQueryDelegate-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_semaphore;

@interface _CDMDSearchQueryDelegate : NSObject <MDSearchQueryDelegate>
{
    NSObject<OS_dispatch_semaphore> *_mdQuerySem;
    NSMutableArray *_recentMDSearchQueryResults;
}

- (void).cxx_destruct;
- (void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2;
- (void)searchQuery:(id)arg1 didFailWithError:(id)arg2;
- (void)searchQuery:(id)arg1 didReturnItems:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

