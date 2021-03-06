//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/UNSContentProtectionStrategy-Protocol.h>

@class NSString;

@interface UNSAtomicDataContentProtectionStrategy : NSObject <UNSContentProtectionStrategy>
{
    unsigned long long _dataWritingFileProtection;
}

- (unsigned long long)_dataWritingOptionForFileProtectionType:(id)arg1;
- (void)migrateDataAtPath:(id)arg1 toPath:(id)arg2;
- (_Bool)removeItemAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)writeData:(id)arg1 atPath:(id)arg2 error:(id *)arg3;
- (id)dataAtPath:(id)arg1;
- (_Bool)dataIsAvailableAtPath:(id)arg1;
- (id)initWithFileProtectionType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

