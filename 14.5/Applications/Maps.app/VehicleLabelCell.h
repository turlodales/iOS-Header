//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "VehicleDetailCell-Protocol.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface VehicleLabelCell : UITableViewCell <VehicleDetailCell>
{
    UILabel *_label;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)_commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)init;

@end

