//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchRemote/TROperationHandler-Protocol.h>

@class NSString;

@interface TRSetupConfigurationOperationHandler : NSObject <TROperationHandler>
{
    CDUnknownBlockType _configurationHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType configurationHandler; // @synthesize configurationHandler=_configurationHandler;
- (void)_handleConfigurationRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)registerMessageHandlersForSession:(id)arg1;
- (id)initWithConfigurationHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

