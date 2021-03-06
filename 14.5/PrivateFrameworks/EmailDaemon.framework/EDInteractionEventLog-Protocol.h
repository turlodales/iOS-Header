//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDate, NSDictionary, NSString;
@protocol ECMailAccount, ECMailbox, ECMessage;

@protocol EDInteractionEventLog
- (void)persistEvent:(NSString *)arg1 date:(NSDate *)arg2 message:(id <ECMessage>)arg3 mailboxType:(long long)arg4;
- (void)persistEvent:(NSString *)arg1 date:(NSDate *)arg2 message:(id <ECMessage>)arg3 mailbox:(id <ECMailbox>)arg4;
- (void)persistEvent:(NSString *)arg1 dataFromMessage:(id <ECMessage>)arg2 account:(id <ECMailAccount>)arg3;
- (void)persistEvent:(NSString *)arg1 dataFromMessage:(id <ECMessage>)arg2;
- (void)persistEvent:(NSString *)arg1 date:(NSDate *)arg2 conversationID:(long long)arg3 data:(NSDictionary *)arg4;
- (void)persistEvent:(NSString *)arg1 date:(NSDate *)arg2 message:(id <ECMessage>)arg3 data:(NSDictionary *)arg4;
@end

