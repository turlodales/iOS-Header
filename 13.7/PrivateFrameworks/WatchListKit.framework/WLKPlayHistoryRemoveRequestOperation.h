//
//     Generated by class-dump 3.5 (64 bit).
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

