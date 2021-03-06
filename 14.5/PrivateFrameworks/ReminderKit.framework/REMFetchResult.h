//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSArray, REMFetchMetadata, REMFetchResultToken;

@interface REMFetchResult : NSObject <NSSecureCoding>
{
    long long _type;
    long long _count;
    NSArray *_requestedObjectIDs;
    NSArray *_fetchedAccountStorages;
    NSArray *_fetchedListStorages;
    NSArray *_fetchedReminderStorages;
    REMFetchMetadata *_metadata;
    REMFetchResultToken *_fetchResultToken;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) REMFetchResultToken *fetchResultToken; // @synthesize fetchResultToken=_fetchResultToken;
@property(readonly, nonatomic) REMFetchMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSArray *fetchedReminderStorages; // @synthesize fetchedReminderStorages=_fetchedReminderStorages;
@property(readonly, nonatomic) NSArray *fetchedListStorages; // @synthesize fetchedListStorages=_fetchedListStorages;
@property(readonly, nonatomic) NSArray *fetchedAccountStorages; // @synthesize fetchedAccountStorages=_fetchedAccountStorages;
@property(readonly, nonatomic) NSArray *requestedObjectIDs; // @synthesize requestedObjectIDs=_requestedObjectIDs;
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetadata:(id)arg1;
- (id)initWithRequestedObjectIDs:(id)arg1;
- (id)initWithReminderStorages:(id)arg1;
- (id)initWithListStorages:(id)arg1;
- (id)initWithAccountStorages:(id)arg1;
- (id)initWithAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 requestedObjectIDs:(id)arg4 metadata:(id)arg5;
- (id)initWithCount:(long long)arg1;
- (id)initWithType:(long long)arg1;

@end

