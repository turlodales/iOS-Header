//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class CKDatabaseOperation, FCCKPrivateDatabase;

@protocol FCCKDatabaseOperationMiddleware <NSObject>
- (long long)database:(FCCKPrivateDatabase *)arg1 willEnqueueOperation:(CKDatabaseOperation *)arg2 error:(id *)arg3;
@end

