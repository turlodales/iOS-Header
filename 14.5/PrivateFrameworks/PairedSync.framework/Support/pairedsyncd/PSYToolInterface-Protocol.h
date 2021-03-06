//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PSYOptions;

@protocol PSYToolInterface <NSObject>
- (oneway void)cancelSyncSession;
- (oneway void)clearCurrentResumeContext;
- (oneway void)startSyncWithOptions:(PSYOptions *)arg1;
- (oneway void)getOrderedActivityInfosWithCompletion:(void (^)(NSArray *))arg1;
@end

