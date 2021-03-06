//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

#import "COSBuddyController-Protocol.h"

@class NSString, NSUserActivity;
@protocol COSBuddyControllerDelegate;

@interface COSSetupPageViewController : OBTableWelcomeController <COSBuddyController>
{
    id <COSBuddyControllerDelegate> _delegate;
    NSUserActivity *_tapToRadarActivity;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSUserActivity *tapToRadarActivity; // @synthesize tapToRadarActivity=_tapToRadarActivity;
@property(nonatomic) __weak id <COSBuddyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_endTapToRadarActivity;
- (void)_startTapToRadarActivity;
- (void)openTapToRadar;
- (id)tapToRadarMetadata;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)titleLabel;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

