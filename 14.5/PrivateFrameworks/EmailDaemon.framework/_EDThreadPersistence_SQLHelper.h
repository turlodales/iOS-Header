//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDPersistenceDatabaseConnection, _EDThreadPersistence_StatementCache;

@interface _EDThreadPersistence_SQLHelper : NSObject
{
    EDPersistenceDatabaseConnection *_connection;
    _EDThreadPersistence_StatementCache *_cache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _EDThreadPersistence_StatementCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) EDPersistenceDatabaseConnection *connection; // @synthesize connection=_connection;
- (_Bool)executeSQL:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (_Bool)executeSQL:(id)arg1 indexBindings:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (_Bool)executeSelectSQL:(id)arg1 bindings:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3 rowHandler:(CDUnknownBlockType)arg4;
- (long long)executeUpsertSQL:(id)arg1 bindings:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (int)executeUpdateSQL:(id)arg1 bindings:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)initWithCache:(id)arg1;

@end

