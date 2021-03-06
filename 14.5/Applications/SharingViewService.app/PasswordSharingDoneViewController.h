//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseViewController.h"

@class NSDictionary, UIButton, UIImageView, UILabel;

@interface PasswordSharingDoneViewController : SVSBaseViewController
{
    UIButton *_doneButton;
    UIImageView *_imageView;
    UILabel *_infoLabel;
    UIButton *_reportBugButton;
    UILabel *_titleLabel;
    int _status;
    double _duration;
    NSDictionary *_userInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)handleReportBugButton:(id)arg1;
- (void)handleDismissButton:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)configureUIElementsForHotspot;
- (void)configureUIElementsDefault;
- (void)viewWillAppear:(_Bool)arg1;

@end

