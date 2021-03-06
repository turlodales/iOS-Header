//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PairedSync/NSCopying-Protocol.h>
#import <PairedSync/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSUUID;

@interface PSYSyncSession : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_activityMap;
    _Bool _supportsMigrationSync;
    NSUUID *_pairingIdentifier;
    long long _switchIndex;
    NSUUID *_sessionIdentifier;
    unsigned long long _syncSessionType;
    NSArray *_activities;
    unsigned long long _syncSessionState;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long syncSessionState; // @synthesize syncSessionState=_syncSessionState;
@property(retain, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(nonatomic) _Bool supportsMigrationSync; // @synthesize supportsMigrationSync=_supportsMigrationSync;
@property(nonatomic) unsigned long long syncSessionType; // @synthesize syncSessionType=_syncSessionType;
@property(retain, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(nonatomic) long long switchIndex; // @synthesize switchIndex=_switchIndex;
@property(retain, nonatomic) NSUUID *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
- (id)description;
@property(readonly, nonatomic) double sessionProgress;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)syncSessionByUpdatingSyncSessionState:(unsigned long long)arg1;
- (id)syncSessionByReplacingActivity:(id)arg1;
- (id)syncSessionByUpdatingActivities:(id)arg1;
- (id)activityForService:(id)arg1;
- (id)activityForLabel:(id)arg1;
- (id)completedActivities;
- (id)incompleteActivities;
- (id)firstIncompleteActivity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPairingIdentifier:(id)arg1 switchIndex:(long long)arg2 sessionIdentifier:(id)arg3 syncSessionType:(unsigned long long)arg4 supportsMigrationSync:(_Bool)arg5 activities:(id)arg6 state:(unsigned long long)arg7;
- (id)_deepCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

