//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXLocalizationCaptionService/AXUIClientDelegate-Protocol.h>

@class AXUIClient, NSString;

@interface AXLocalizationCaptionService : NSObject <AXUIClientDelegate>
{
    AXUIClient *_client;
}

+ (void)stopService;
+ (void)startService;
+ (void)_sendMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 errorHandler:(CDUnknownBlockType)arg3;
+ (id)service;
- (void).cxx_destruct;
@property(retain, nonatomic) AXUIClient *client; // @synthesize client=_client;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (id)_clientIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

