//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sharing/SDXPCDaemonProtocol-Protocol.h>

@class NSDictionary, NSString;

@protocol SDAirDropClassroomTransferManagerProtocol <SDXPCDaemonProtocol>
- (void)updateTransferWithIdentifier:(NSString *)arg1 withState:(long long)arg2 information:(NSDictionary *)arg3 completionHandler:(void (^)(_Bool, NSURL *, NSError *))arg4;
@end

