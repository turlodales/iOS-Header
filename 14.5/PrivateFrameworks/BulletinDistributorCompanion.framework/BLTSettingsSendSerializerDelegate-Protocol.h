//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/BLTSendQueueSerializerDelegate-Protocol.h>

@class NSNumber, NSObject, NSString, PBCodable;

@protocol BLTSettingsSendSerializerDelegate <BLTSendQueueSerializerDelegate>
- (void)sendRequest:(PBCodable *)arg1 type:(unsigned short)arg2 withTimeout:(NSNumber *)arg3 withDescription:(NSObject *)arg4 onlyOneFor:(NSString *)arg5 didSend:(void (^)(_Bool, NSError *))arg6 andResponse:(void (^)(IDSProtobuf *))arg7;
@end

