//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class NSArray, WFTriggerTableViewController;

@protocol WFTriggerTableViewControllerDelegate <NSObject>
- (void)triggerTableViewControllerDidCancel:(WFTriggerTableViewController *)arg1;
- (void)triggerTableViewController:(WFTriggerTableViewController *)arg1 didFinishWithAnySelected:(_Bool)arg2 orSelectedOptions:(NSArray *)arg3;
@end

