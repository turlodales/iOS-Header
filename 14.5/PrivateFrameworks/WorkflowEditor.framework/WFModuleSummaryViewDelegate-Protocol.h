//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/NSObject-Protocol.h>

@class UIViewController, WFModuleSummaryView;

@protocol WFModuleSummaryViewDelegate <NSObject>
- (void)summaryViewDidInvalidateSize:(WFModuleSummaryView *)arg1;
- (void)summaryViewDidEndEditing:(WFModuleSummaryView *)arg1;
- (void)summaryViewWillBeginEditing:(WFModuleSummaryView *)arg1;
- (UIViewController *)viewControllerContainingSummaryView:(WFModuleSummaryView *)arg1;
@end

