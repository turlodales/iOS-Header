//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDMetadataValueEntity : HDHealthEntity
{
}

+ (id)_predicateForEntityWithObjectID:(id)arg1;
+ (id)_predicateForEntityWithKeyID:(id)arg1;
+ (_Bool)_insertMetadataValueWithKeyID:(long long)arg1 objectID:(long long)arg2 value:(id)arg3 database:(id)arg4 error:(id *)arg5;
+ (id)deleteStatementForObjectMetadataWithTransaction:(id)arg1;
+ (long long)protectionClass;
+ (id)indices;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)databaseTable;

@end

