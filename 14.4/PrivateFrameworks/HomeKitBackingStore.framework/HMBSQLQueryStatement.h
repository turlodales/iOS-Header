//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBSQLStatement.h>

@class NSDictionary;

@interface HMBSQLQueryStatement : HMBSQLStatement
{
    NSDictionary *_arguments;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *arguments; // @synthesize arguments=_arguments;
- (id)initWithContext:(id)arg1 statement:(id)arg2;
- (id)initWithContext:(id)arg1 statement:(struct sqlite3_stmt *)arg2 queryPlans:(id)arg3 arguments:(id)arg4;

@end

