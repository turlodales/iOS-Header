//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TROperation.h>

@interface TRNetworkOperation : TROperation
{
    CDUnknownBlockType _sendingWiFiInfoHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType sendingWiFiInfoHandler; // @synthesize sendingWiFiInfoHandler=_sendingWiFiInfoHandler;
- (void)_handleResponse:(id)arg1;
- (void)_sendRequestWithSSID:(id)arg1 password:(id)arg2;
- (void)execute;

@end

