//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSHistoryPredicate-Protocol.h>

@class WBSHistoryServiceVisit, WBSHistoryVisit;

@protocol WBSHistoryVisitPredicate <WBSHistoryPredicate>
- (_Bool)evaluateServiceVisit:(WBSHistoryServiceVisit *)arg1;
- (_Bool)evaluateVisit:(WBSHistoryVisit *)arg1;
@end

