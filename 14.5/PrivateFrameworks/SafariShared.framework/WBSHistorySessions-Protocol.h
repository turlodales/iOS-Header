//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDate, WBSHistoryItem, WBSHistorySession;

@protocol WBSHistorySessions
@property(readonly, nonatomic) unsigned long long numberOfSessions;
@property(readonly, copy, nonatomic) NSArray *orderedSessions;
- (void)orderedItemsNewerThanDate:(NSDate *)arg1 maxCount:(unsigned long long)arg2 completionHandler:(void (^)(NSArray *))arg3;
- (void)enumerateOrderedItemsLastVisitedInSession:(WBSHistorySession *)arg1 usingBlock:(void (^)(WBSHistoryItem *))arg2;
- (NSArray *)itemsLastVisitedInSession:(WBSHistorySession *)arg1;
- (WBSHistoryItem *)itemLastVisitedInSession:(WBSHistorySession *)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsVisitedInSession:(WBSHistorySession *)arg1;
@end

