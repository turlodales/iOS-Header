//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMediaStream/MSStreamsProtocolDelegate-Protocol.h>

@class MSSubscribeStreamsProtocol, NSArray, NSDictionary, NSError, NSString;

@protocol MSSubscribeStreamsProtocolDelegate <MSStreamsProtocolDelegate>
- (void)subscribeStreamsProtocol:(MSSubscribeStreamsProtocol *)arg1 didReceiveAuthenticationError:(NSError *)arg2;
- (void)subscribeStreamsProtocol:(MSSubscribeStreamsProtocol *)arg1 didFinishError:(NSError *)arg2;
- (void)subscribeStreamsProtocol:(MSSubscribeStreamsProtocol *)arg1 didFindTemporarilyUnavailableSubscriptionForPersonID:(NSString *)arg2;
- (void)subscribeStreamsProtocol:(MSSubscribeStreamsProtocol *)arg1 didFindDisappearedSubscriptionForPersonID:(NSString *)arg2;
- (void)subscribeStreamsProtocol:(MSSubscribeStreamsProtocol *)arg1 didFinishReceivingUpdatesForPersonID:(NSString *)arg2 ctag:(NSString *)arg3;
- (void)subscribeStreamsProtocol:(MSSubscribeStreamsProtocol *)arg1 didReceiveAssetCollections:(NSArray *)arg2 forPersonID:(NSString *)arg3;
- (void)subscribeStreamsProtocol:(MSSubscribeStreamsProtocol *)arg1 willReceiveUpdatesForPersonID:(NSString *)arg2 wasReset:(_Bool)arg3 metadata:(NSDictionary *)arg4;
@end

