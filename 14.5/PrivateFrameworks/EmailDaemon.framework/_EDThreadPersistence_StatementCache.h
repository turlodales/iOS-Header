//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDPersistenceDatabaseConnection, NSMutableDictionary;

@interface _EDThreadPersistence_StatementCache : NSObject
{
    EDPersistenceDatabaseConnection *_connection;
    NSMutableDictionary *_preparedStatements;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *preparedStatements; // @synthesize preparedStatements=_preparedStatements;
@property(readonly, nonatomic) EDPersistenceDatabaseConnection *connection; // @synthesize connection=_connection;
- (id)preparedStatementForQueryString:(id)arg1;
- (id)initWithConnection:(id)arg1;

@end

