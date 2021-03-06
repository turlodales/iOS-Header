//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ASDRepairOptions, ApplicationProxy, NSArray, NSString;
@protocol ApplicationRepairDelegate;

@protocol ApplicationRepair <NSObject>
+ (_Bool)shouldAttemptToRepairApplication:(ApplicationProxy *)arg1 options:(ASDRepairOptions *)arg2 logUUID:(NSString *)arg3;
@property(retain, nonatomic) NSString *logUUID;
@property(nonatomic) __weak id <ApplicationRepairDelegate> delegate;
@property(readonly, nonatomic) NSArray *repairedBundleIDs;
- (_Bool)repairApplication:(ApplicationProxy *)arg1 error:(id *)arg2;
@end

