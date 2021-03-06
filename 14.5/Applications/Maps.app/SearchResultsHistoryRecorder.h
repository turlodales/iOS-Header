//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SearchHistoryRecorder-Protocol.h"

@class MSPMutableHistoryEntrySearch, NSArray;
@protocol MKMapServiceSearchTicket;

__attribute__((visibility("hidden")))
@interface SearchResultsHistoryRecorder : NSObject <SearchHistoryRecorder>
{
    _Bool _hasRefinedMapItems;
    MSPMutableHistoryEntrySearch *_searchRequestHistoryItem;
    NSArray *_searchResults;
    id <MKMapServiceSearchTicket> _ticket;
    long long _auxiliaryControlsOrigin;
}

- (void).cxx_destruct;
@property(nonatomic) long long auxiliaryControlsOrigin; // @synthesize auxiliaryControlsOrigin=_auxiliaryControlsOrigin;
@property(retain, nonatomic) id <MKMapServiceSearchTicket> ticket; // @synthesize ticket=_ticket;
@property(readonly, nonatomic) _Bool hasRefinedMapItems; // @synthesize hasRefinedMapItems=_hasRefinedMapItems;
@property(readonly, copy, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(readonly, nonatomic) MSPMutableHistoryEntrySearch *searchRequestHistoryItem; // @synthesize searchRequestHistoryItem=_searchRequestHistoryItem;
- (void)recordItemInHistoryWithCompletion:(CDUnknownBlockType)arg1;
- (void)recordItemInHistory;
- (id)initWithTicket:(id)arg1 searchResults:(id)arg2 auxiliaryControlsOrigin:(long long)arg3 hasRefinedMapItems:(_Bool)arg4 tracksRAPReportingOnly:(_Bool)arg5 completionTitle:(id)arg6;

@end

