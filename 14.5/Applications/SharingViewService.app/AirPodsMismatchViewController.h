//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSDictionary, NSString, UIImageView, UILabel, _TtC18SharingViewService20SVSAdjustedImageView;

@interface AirPodsMismatchViewController : SVSBaseViewController <UIGestureRecognizerDelegate>
{
    UILabel *_leftMajorLabel;
    UILabel *_leftMinorLabel;
    UIImageView *_leftPointerImageView;
    UILabel *_rightMajorLabel;
    UILabel *_rightMinorLabel;
    UIImageView *_rightPointerImageView;
    _TtC18SharingViewService20SVSAdjustedImageView *_productImageView;
    NSDictionary *_userInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void)handleTapOutsideView:(id)arg1;
- (void)handleDismissButton:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

