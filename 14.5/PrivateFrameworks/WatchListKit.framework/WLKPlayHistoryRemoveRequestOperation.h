//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class WLKContinueWatchingResponse;

@interface WLKPlayHistoryRemoveRequestOperation : WLKUTSNetworkRequestOperation
{
    WLKContinueWatchingResponse *_response;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WLKContinueWatchingResponse *response; // @synthesize response=_response;
- (void)processResponse;
- (id)initWithChannelID:(id)arg1 externalID:(id)arg2 caller:(id)arg3;

@end

