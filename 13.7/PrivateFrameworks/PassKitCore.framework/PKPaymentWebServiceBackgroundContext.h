//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PKPaymentWebServiceBackgroundContext : NSObject <NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_backgroundTaskRecordsByTaskIdentifier;
    NSMutableDictionary *_backgroundTaskRecordsByRecordName;
}

+ (id)contextWithArchive:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *backgroundTaskRecordsByRecordName; // @synthesize backgroundTaskRecordsByRecordName=_backgroundTaskRecordsByRecordName;
@property(retain) NSMutableDictionary *backgroundTaskRecordsByTaskIdentifier; // @synthesize backgroundTaskRecordsByTaskIdentifier=_backgroundTaskRecordsByTaskIdentifier;
- (id)remainingTasks;
- (void)removeBackgroundDownloadRecordForRecordName:(id)arg1;
- (void)removeBackgroundDownloadRecordForTaskIdentifier:(unsigned long long)arg1;
- (id)backgroundDownloadRecordForRecordName:(id)arg1;
- (id)backgroundDownloadRecordForTaskIdentifier:(unsigned long long)arg1;
- (void)addBackgroundDownloadRecord:(id)arg1 forRecordName:(id)arg2;
- (void)addBackgroundDownloadRecord:(id)arg1 forTaskIdentifier:(unsigned long long)arg2;
- (void)archiveAtPath:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

