//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3DatabaseConnection, MLMediaLibraryService, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface ML3StatementAccumulator : NSObject
{
    MLMediaLibraryService *_xpcService;
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned long long _statementThreshold;
    NSMutableArray *_statementQueue;
    NSString *_databasePath;
    ML3DatabaseConnection *_connection;
    NSUUID *_existingTransactionIdentifier;
    unsigned long long _priorityLevel;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long priorityLevel; // @synthesize priorityLevel=_priorityLevel;
@property(retain, nonatomic) NSUUID *existingTransactionIdentifier; // @synthesize existingTransactionIdentifier=_existingTransactionIdentifier;
@property(readonly, nonatomic) ML3DatabaseConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(readonly, nonatomic) NSMutableArray *statementQueue; // @synthesize statementQueue=_statementQueue;
@property(nonatomic) unsigned long long statementThreshold; // @synthesize statementThreshold=_statementThreshold;
- (_Bool)_onQueueFlushAndWait:(_Bool)arg1;
- (_Bool)flushAndWait:(_Bool)arg1;
- (_Bool)enqueueStatement:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithConnection:(id)arg1;

@end

