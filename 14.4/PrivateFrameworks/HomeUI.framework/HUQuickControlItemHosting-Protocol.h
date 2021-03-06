//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class NSSet;
@protocol HUQuickControlItemUpdating;

@protocol HUQuickControlItemHosting <NSObject>
@property(nonatomic, getter=areControlsVisible) _Bool controlsVisible;
@property(readonly, copy, nonatomic) NSSet *controlItems;
@property(readonly, nonatomic) id <HUQuickControlItemUpdating> itemUpdater;
- (void)quickControlItemUpdater:(id <HUQuickControlItemUpdating>)arg1 didUpdateResultsForControlItems:(NSSet *)arg2;
@end

