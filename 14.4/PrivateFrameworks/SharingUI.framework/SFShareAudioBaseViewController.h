//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SFShareAudioViewController, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SFShareAudioBaseViewController : UIViewController
{
    SFShareAudioViewController *_mainController;
    UILabel *_titleLabel;
    UIView *_cardView;
    _Bool _viewActive;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool viewActive; // @synthesize viewActive=_viewActive;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SFShareAudioViewController *mainController; // @synthesize mainController=_mainController;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

