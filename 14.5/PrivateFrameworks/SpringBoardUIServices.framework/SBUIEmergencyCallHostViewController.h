//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <SpringBoardUIServices/SBUIEmergencyCallHostInterface-Protocol.h>

@class UIColor, _UIBackdropView;

@interface SBUIEmergencyCallHostViewController : _UIRemoteViewController <SBUIEmergencyCallHostInterface>
{
    _UIBackdropView *_blurView;
    UIColor *_tintColor;
    long long _backgroundStyle;
    double _blurRadius;
    _Bool _blursSelf;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
+ (void)requestEmergencyCallControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) _Bool blursSelf; // @synthesize blursSelf=_blursSelf;
- (void)_createAndAddBlurViewIfNecessary;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dismiss;
- (id)tintColorForBackgroundStyle:(long long)arg1 outBlurRadius:(double *)arg2;

@end

