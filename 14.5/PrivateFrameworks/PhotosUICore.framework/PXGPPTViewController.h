//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PXGLayout, PXGView;

@interface PXGPPTViewController : UIViewController
{
    PXGView *_gridView;
    PXGLayout *_initialLayout;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXGLayout *initialLayout; // @synthesize initialLayout=_initialLayout;
- (void)_handleDoubleTap:(id)arg1;
- (void)animate:(CDUnknownBlockType)arg1 animationRenderingCompletionHandler:(CDUnknownBlockType)arg2 proceedHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) PXGView *gridView; // @synthesize gridView=_gridView;
- (void)viewDidLoad;
- (id)initWithLayout:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

