//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

@class UIUndoTutorialView;

__attribute__((visibility("hidden")))
@interface UIUndoTutorialViewController : UIViewController
{
    CDUnknownBlockType _completionHandler;
    UIUndoTutorialView *_tutorialView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIUndoTutorialView *tutorialView; // @synthesize tutorialView=_tutorialView;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)doneButtonPressed;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_canShowWhileLocked;

@end

