//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBAppLayout, SBAppSwitcherReusableSnapshotView;

@protocol SBAppSwitcherReusableSnapshotViewDelegate <NSObject>
- (_Bool)snapshotView:(SBAppSwitcherReusableSnapshotView *)arg1 shouldShowAppClipOverlayForLayout:(SBAppLayout *)arg2;
- (struct CGRect)layoutFrameForItemWithRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2 interfaceOrientation:(long long)arg3 forSnapshotView:(SBAppSwitcherReusableSnapshotView *)arg4;
@end

