//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HomeDataProvidingObserver-Protocol.h"

@class SuggestionsDataProvider;

@protocol SuggestionsDataProviderObserver <HomeDataProvidingObserver>

@optional
- (void)suggestionsDataProviderDidDetachFromEngine:(SuggestionsDataProvider *)arg1;
- (void)suggestionsDataProviderDidAttachToEngine:(SuggestionsDataProvider *)arg1;
@end

