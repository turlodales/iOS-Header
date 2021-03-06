//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NUIContainerGridView;
@protocol NUIWidgetGridViewDataSource, NUIWidgetGridViewDelegate;

@interface NUIWidgetGridView : UIView
{
    NUIContainerGridView *_gridView;
    NSArray *_itemViews;
    struct CGSize _labelSizes[8];
    unsigned long long _currentLayout;
    id <NUIWidgetGridViewDataSource> _dataSource;
    id <NUIWidgetGridViewDelegate> _delegate;
    long long _imageStyle;
    long long _titleStyle;
    long long _subtitleStyle;
    double _centerAdjustmentAllowed;
    double _currentLabelOutset;
}

+ (unsigned long long)maxNumberOfItems;
+ (double)itemWidth;
- (void).cxx_destruct;
@property(readonly, nonatomic) double currentLabelOutset; // @synthesize currentLabelOutset=_currentLabelOutset;
@property(nonatomic) double centerAdjustmentAllowed; // @synthesize centerAdjustmentAllowed=_centerAdjustmentAllowed;
@property(nonatomic) long long subtitleStyle; // @synthesize subtitleStyle=_subtitleStyle;
@property(nonatomic) long long titleStyle; // @synthesize titleStyle=_titleStyle;
@property(nonatomic) long long imageStyle; // @synthesize imageStyle=_imageStyle;
@property(nonatomic) __weak id <NUIWidgetGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <NUIWidgetGridViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)layoutSubviews;
- (CDStruct_c3b9c2ee)borrowableSpaceForCellAtIndex:(unsigned long long)arg1;
- (CDStruct_c3b9c2ee)entitledExtraSpaceForCellAtIndex:(unsigned long long)arg1;
- (id)cellForGridViewItemAtIndex:(long long)arg1;
- (void)reloadData;
- (void)contentSizeDidChange;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;

@end

