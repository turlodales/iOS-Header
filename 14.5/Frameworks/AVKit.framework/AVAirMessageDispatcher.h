//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/AVAirTransportDelegate-Protocol.h>
#import <AVKit/AVBonjourServiceClientDelegate-Protocol.h>

@class AVAirTransport, AVBonjourServiceClient, NSNetService, NSString;
@protocol AVAirMessageDispatcherClientDelegate;

__attribute__((visibility("hidden")))
@interface AVAirMessageDispatcher : NSObject <AVBonjourServiceClientDelegate, AVAirTransportDelegate>
{
    id <AVAirMessageDispatcherClientDelegate> _delegate;
    NSNetService *_currentNetService;
    AVAirTransport *_channel;
    AVBonjourServiceClient *_bonjourServiceClient;
}

+ (id)shared;
+ (_Bool)_isDispatcherEnabled;
- (void).cxx_destruct;
@property(readonly, nonatomic) AVBonjourServiceClient *bonjourServiceClient; // @synthesize bonjourServiceClient=_bonjourServiceClient;
@property(retain, nonatomic) AVAirTransport *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSNetService *currentNetService; // @synthesize currentNetService=_currentNetService;
@property(nonatomic) __weak id <AVAirMessageDispatcherClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)airTransport:(id)arg1 didReceiveObject:(id)arg2;
- (void)airTransportInputDidClose:(id)arg1;
- (void)airTransportOutputDidOpen:(id)arg1;
- (void)didConnectToBonjourService:(id)arg1 channel:(id)arg2;
- (void)sendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool haveAirPlayService;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

