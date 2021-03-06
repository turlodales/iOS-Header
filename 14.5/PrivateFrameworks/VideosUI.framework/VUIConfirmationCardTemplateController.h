//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class IKViewElement, NSTimer, VUIConfirmationCardView;

__attribute__((visibility("hidden")))
@interface VUIConfirmationCardTemplateController : UIViewController
{
    _Bool _setTimer;
    IKViewElement *_viewElement;
    NSTimer *_dismissTimer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSTimer *dismissTimer; // @synthesize dismissTimer=_dismissTimer;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_dismissConfirmation:(id)arg1;
- (void)_setupTimer;
- (void)updateWithViewElement:(id)arg1;
@property(readonly, nonatomic) VUIConfirmationCardView *cardView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)loadView;

@end

