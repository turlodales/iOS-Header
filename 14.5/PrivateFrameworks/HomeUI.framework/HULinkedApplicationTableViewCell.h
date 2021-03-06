//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>

@class HFItem, HULinkedApplicationView, NSString;
@protocol HUResizableCellDelegate;

@interface HULinkedApplicationTableViewCell : UITableViewCell <HUCellProtocol>
{
    HULinkedApplicationView *_linkedApplicationView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HULinkedApplicationView *linkedApplicationView; // @synthesize linkedApplicationView=_linkedApplicationView;
- (void)updateUIWithAnimation:(_Bool)arg1;
@property(retain, nonatomic) HFItem *item;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end

