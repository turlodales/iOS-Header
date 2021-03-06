//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FROfflineModeSupport <NSObject>
@property(nonatomic) long long offlineReason;
@property(nonatomic, getter=isInOfflineMode) _Bool inOfflineMode;
- (void)notifyWhenAvailabilityInOfflineModeHasBeenDeterminedUsingBlock:(void (^)(void))arg1;
- (_Bool)canProvideAvailabilityInOfflineModeSynchronously;
- (_Bool)isAvailableInOfflineMode;
@end

