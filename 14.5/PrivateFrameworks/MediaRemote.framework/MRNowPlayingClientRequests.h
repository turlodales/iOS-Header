//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/MRNowPlayingClientState-Protocol.h>

@class MRClient, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MRNowPlayingClientRequests : NSObject <MRNowPlayingClientState>
{
    NSMutableArray *_playerClients;
    MRClient *_client;
    NSArray *_nowPlayingClients;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *nowPlayingClients; // @synthesize nowPlayingClients=_nowPlayingClients;
@property(readonly, nonatomic) MRClient *client; // @synthesize client=_client;
- (void)restoreNowPlayingClientState;
- (void)removePlayer:(id)arg1;
- (id)existingNowPlayingPlayerClientRequestsForPlayerPath:(id)arg1;
- (id)nowPlayingPlayerClientRequestsForPlayerPath:(id)arg1;
- (id)debugDescription;
- (id)initWithClient:(id)arg1;

@end

