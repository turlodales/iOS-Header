//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSSqliteDatabaseConnection;

@interface BSSqlitePreparedStatement : NSObject
{
    BSSqliteDatabaseConnection *_dbConnection;
}

- (void).cxx_destruct;
- (_Bool)executeWithBindings:(id)arg1 resultRowHandler:(CDUnknownBlockType)arg2 error:(out id *)arg3;
- (void)dealloc;
- (id)init;

@end

