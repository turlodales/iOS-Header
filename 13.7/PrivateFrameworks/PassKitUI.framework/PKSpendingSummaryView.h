//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKSpendingSummary, PKSpendingSummaryChartView, UIImage, UIImageView, UILabel;

@interface PKSpendingSummaryView : UIView
{
    UILabel *_totalAmount;
    UILabel *_spendingLabel;
    UIImageView *_upOrDownImage;
    UILabel *_percentageLabel;
    PKSpendingSummaryChartView *_chartView;
    PKSpendingSummaryChartView *_chartViewToFadeOut;
    _Bool _isTemplateLayout;
    UIImage *_downImage;
    UIImage *_upImage;
    PKSpendingSummary *_summary;
    _Bool _visible;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) UIImage *downImage; // @synthesize downImage=_downImage;
@property(retain, nonatomic) UIImage *upImage; // @synthesize upImage=_upImage;
- (void)configureWithSummary:(id)arg1 presentationStyle:(unsigned long long)arg2;
- (_Bool)_needsLayoutWithSummary:(id)arg1;
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

