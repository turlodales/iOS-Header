//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/NSObject-Protocol.h>

@class IDSProtobuf, NSDictionary, NSNumber, NSURL;

@protocol BLTSendQueueSerializerDelegate <NSObject>
- (void)handleIDSProtobuf:(IDSProtobuf *)arg1;
- (void)sendFileURL:(NSURL *)arg1 withTimeout:(NSNumber *)arg2 extraMetadata:(NSDictionary *)arg3 responseHandlers:(NSDictionary *)arg4 didSend:(void (^)(_Bool, NSError *))arg5 didQueue:(void (^)(void))arg6;
@end

