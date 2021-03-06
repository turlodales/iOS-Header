//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKAccountsSyncServiceServerDelegate;

@interface NNMKAccountsSyncServiceServer : NNMKSyncServiceEndpoint
{
    id <NNMKAccountsSyncServiceServerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <NNMKAccountsSyncServiceServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (id)syncVIPList:(id)arg1;
- (id)requestWatchAccountsStatus:(id)arg1;
- (id)sendStandaloneAccountIdentity:(id)arg1;
- (id)sendInitialAccountsSync:(id)arg1;
- (id)deleteAccount:(id)arg1;
- (id)addOrUpdateAccount:(id)arg1;
- (id)initWithQueue:(id)arg1;

@end

