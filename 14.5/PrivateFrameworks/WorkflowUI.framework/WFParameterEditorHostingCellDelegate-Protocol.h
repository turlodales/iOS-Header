//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class WFParameterEditorHostingCell;
@protocol WFParameterState;

@protocol WFParameterEditorHostingCellDelegate <NSObject>
- (void)parameterEditorCellDidInvalidateSize:(WFParameterEditorHostingCell *)arg1;
- (void)parameterEditorCell:(WFParameterEditorHostingCell *)arg1 didUpdateParameterState:(id <WFParameterState>)arg2;
@end

