//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BMBehaviorDatabaseMetadata, BMManagedObjectConverter, NSManagedObjectContext, NSPersistentContainer, NSURL;

@interface BMBehaviorStorage : NSObject
{
    _Bool _readOnly;
    NSURL *_URL;
    BMBehaviorDatabaseMetadata *_metadata;
    NSPersistentContainer *_container;
    NSManagedObjectContext *_context;
    BMManagedObjectConverter *_converter;
}

+ (id)defaultURL;
- (void).cxx_destruct;
@property(retain, nonatomic) BMManagedObjectConverter *converter; // @synthesize converter=_converter;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSPersistentContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) BMBehaviorDatabaseMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)description;
- (void)resetStorageWithMetadata:(id)arg1 error:(id *)arg2;
- (void)saveRules:(id)arg1 error:(id *)arg2;
- (id)fetchRulesWithAbsoluteSupport:(unsigned long long)arg1 support:(double)arg2 confidence:(double)arg3 conviction:(double)arg4 lift:(double)arg5 rulePowerFactor:(double)arg6 uniqueDaysLastWeek:(unsigned long long)arg7 uniqueDaysTotal:(unsigned long long)arg8 filters:(id)arg9 limit:(unsigned long long)arg10 error:(id *)arg11;
- (id)fetchRulesWithSupport:(double)arg1 confidence:(double)arg2 filters:(id)arg3 limit:(unsigned long long)arg4 error:(id *)arg5;
- (id)fetchRulesWithSupport:(double)arg1 confidence:(double)arg2 filters:(id)arg3 error:(id *)arg4;
- (id)initWithURL:(id)arg1 readOnly:(_Bool)arg2 error:(id *)arg3;
- (id)initWithURL:(id)arg1 readOnly:(_Bool)arg2;
- (id)init;

@end

