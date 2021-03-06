//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class BlankView, NSObject;
@protocol BlankViewControllerDelegate;

@interface BlankViewController : UIViewController
{
    BlankView *_blankView;
    NSObject<BlankViewControllerDelegate> *_dataSourceDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) NSObject<BlankViewControllerDelegate> *dataSourceDelegate; // @synthesize dataSourceDelegate=_dataSourceDelegate;
- (void)updateMessage;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;

@end

