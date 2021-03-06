//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWMessageHandler-Protocol.h>

@class NSString;
@protocol SWMessageHandler;

@interface SWWeakMessageHandler : NSObject <SWMessageHandler>
{
    id <SWMessageHandler> _messageHandler;
}

+ (id)handlerWithMessageHandler:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SWMessageHandler> messageHandler; // @synthesize messageHandler=_messageHandler;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

