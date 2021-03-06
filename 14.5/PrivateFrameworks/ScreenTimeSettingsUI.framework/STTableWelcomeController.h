//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

@class NSLayoutConstraint, UITableViewController;

__attribute__((visibility("hidden")))
@interface STTableWelcomeController : OBTableWelcomeController
{
    UITableViewController *_tableViewController;
    NSLayoutConstraint *_heightConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) UITableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
- (void)_contentSizeDidChangeFrom:(struct CGSize)arg1 to:(struct CGSize)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setTableView:(id)arg1;
- (void)dealloc;

@end

