//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HMAccessory, HMMediaSystem, HUItemTableViewController;
@protocol HUPresentationDelegateHost;

@protocol HUMediaSystemEditorViewControllerDelegate <NSObject>
- (void)mediaSystemEditor:(HUItemTableViewController<HUPresentationDelegateHost> *)arg1 didAbortMediaSystemCreationDueToAccessoryNeedingUpdate:(HMAccessory *)arg2;
- (void)mediaSystemEditor:(HUItemTableViewController<HUPresentationDelegateHost> *)arg1 didCreateMediaSystem:(HMMediaSystem *)arg2;
@end

