//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDSyncEntity-Protocol.h>

@class NSString;

@interface HDMedicalIDSyncEntity : NSObject <HDSyncEntity>
{
}

+ (_Bool)setSyncProvenance:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)getSyncProvencanceOfMedicalIDForProfile:(id)arg1 error:(id *)arg2;
+ (_Bool)_setSyncAnchor:(long long)arg1 profile:(id)arg2 error:(id *)arg3;
+ (long long)_getCurrentSyncAnchorWithProfile:(id)arg1 error:(id *)arg2;
+ (id)_medicalIDFromCodable:(id)arg1;
+ (id)_codableFromMedicalID:(id)arg1;
+ (_Bool)supportsSyncStore:(id)arg1;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (long long)nextSyncAnchorWithSession:(id)arg1 startSyncAnchor:(long long)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id *)arg5;
+ (id)syncEntityIdentifier;
+ (_Bool)_touchSyncAnchorWithProfile:(id)arg1 shouldIncrement:(_Bool)arg2 error:(id *)arg3;
+ (_Bool)incrementSyncAnchorWithProfile:(id)arg1 error:(id *)arg2;
+ (_Bool)touchSyncAnchorIfNecessaryWithProfile:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

