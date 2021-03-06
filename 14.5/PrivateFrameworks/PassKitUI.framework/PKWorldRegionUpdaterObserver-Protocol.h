//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKWorldRegion, PKWorldRegionUpdater;

@protocol PKWorldRegionUpdaterObserver <NSObject>

@optional
- (void)worldRegionUpdated:(PKWorldRegionUpdater *)arg1 failedToUpdateRegion:(PKWorldRegion *)arg2;
- (void)worldRegionUpdated:(PKWorldRegionUpdater *)arg1 updatedRegion:(PKWorldRegion *)arg2;
@end

