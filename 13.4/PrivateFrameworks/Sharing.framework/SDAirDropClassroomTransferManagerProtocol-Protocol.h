//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Sharing/SDXPCDaemonProtocol-Protocol.h>

@class NSDictionary, NSString;

@protocol SDAirDropClassroomTransferManagerProtocol <SDXPCDaemonProtocol>
- (void)updateTransferWithIdentifier:(NSString *)arg1 withState:(long long)arg2 information:(NSDictionary *)arg3 completionHandler:(void (^)(_Bool, NSURL *, NSError *))arg4;
@end

