//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SettingsCellularUI/PSUIDanglingPlanTableCell.h>

@class CTCellularPlanPendingTransfer;

__attribute__((visibility("hidden")))
@interface PSUIPlanPendingTransferActivatingTableCell : PSUIDanglingPlanTableCell
{
    CTCellularPlanPendingTransfer *_planPendingTransfer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer; // @synthesize planPendingTransfer=_planPendingTransfer;
- (id)_setStatusLabelText;
- (void)refreshCellContentsWithSpecifier:(id)arg1;

@end

