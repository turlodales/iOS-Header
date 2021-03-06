//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreNFC/NSCopying-Protocol.h>
#import <CoreNFC/NSObject-Protocol.h>
#import <CoreNFC/NSSecureCoding-Protocol.h>

@class NFCNDEFMessage;

@protocol NFCNDEFTag <NSObject, NSSecureCoding, NSCopying>
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
- (void)writeLockWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)writeNDEF:(NFCNDEFMessage *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)readNDEFWithCompletionHandler:(void (^)(NFCNDEFMessage *, NSError *))arg1;
- (void)queryNDEFStatusWithCompletionHandler:(void (^)(unsigned long long, unsigned long long, NSError *))arg1;
@end

