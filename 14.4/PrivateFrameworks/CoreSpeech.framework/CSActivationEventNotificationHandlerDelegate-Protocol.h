//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSActivationEvent, CSActivationEventNotificationHandler;

@protocol CSActivationEventNotificationHandlerDelegate <NSObject>
- (void)activationEventNotificationHandler:(CSActivationEventNotificationHandler *)arg1 event:(CSActivationEvent *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

