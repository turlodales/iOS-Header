//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/NSObject-Protocol.h>

@class NSSet, PSSearchOperation, PSSearchResults;

@protocol PSSearchOperationDelegate <NSObject>
- (void)searchOperationDidCancel:(PSSearchOperation *)arg1;
- (void)searchOperationDidFinish:(PSSearchOperation *)arg1 withResults:(PSSearchResults *)arg2;
- (void)searchOperation:(PSSearchOperation *)arg1 configureSearchResults:(PSSearchResults *)arg2;
- (NSSet *)searchOperation:(PSSearchOperation *)arg1 filteredEntriesForEntries:(NSSet *)arg2;
- (void)searchOperationDidBegin:(PSSearchOperation *)arg1;
@end

