//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/NSObject-Protocol.h>

@class CSRemoteContentModalViewController, CSRemoteContentSession, NSError;

@protocol CSRemoteContentSessionHostDelegate <NSObject>
- (void)remoteContentDidUpdateStyle;
- (void)remoteContentSession:(CSRemoteContentSession *)arg1 didInvalidateWithError:(NSError *)arg2;
- (_Bool)remoteContentSession:(CSRemoteContentSession *)arg1 dismissWithReason:(long long)arg2 completion:(void (^)(void))arg3;
- (_Bool)remoteContentSession:(CSRemoteContentSession *)arg1 presentViewController:(CSRemoteContentModalViewController *)arg2;
- (_Bool)shouldActivateRemoteContentSession:(CSRemoteContentSession *)arg1;
@end

