//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoordinationCore/NSObject-Protocol.h>

@class COMeshCommand, NSError;

@protocol COMeshControllerQueuedElementProtocol <NSObject>
- (void)invokeCallbackWithError:(NSError *)arg1;
- (COMeshCommand *)command;
@end

