//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSString, SSMachineDataRequest;

@interface ISMachineDataActionOperation : ISOperation
{
    _Bool _blocksPurchaseRequests;
    _Bool _hidesServerDrivenDialogs;
    SSMachineDataRequest *_request;
    CDUnknownBlockType _resultBlock;
    NSString *_syncState;
    NSString *_userAgent;
}

- (void).cxx_destruct;
- (_Bool)_syncMachineWithRequest:(id)arg1 error:(id *)arg2;
- (_Bool)_shouldRetryAfterError:(id)arg1;
- (_Bool)_provisionWithRequest:(id)arg1 error:(id *)arg2;
- (_Bool)_eraseProvisioning;
- (id)uniqueKey;
- (void)run;
@property(copy) NSString *userAgent;
@property(readonly) NSString *syncState;
@property(copy) CDUnknownBlockType resultBlock;
@property _Bool hidesServerDrivenDialogs;
@property _Bool blocksPurchaseRequests;
@property(readonly) SSMachineDataRequest *machineDataRequest;
- (id)initWithMachineDataRequest:(id)arg1;

@end

