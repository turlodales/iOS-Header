//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSNumberFormatter, SFPrivacyReportMeterBar, UILabel, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface SFPrivacyReportTrackingTableViewCell : UITableViewCell
{
    SFPrivacyReportMeterBar *_countMeter;
    UILabel *_maxCountLabel;
    UILayoutGuide *_maxCountMeterGuide;
    NSLayoutConstraint *_countMeterWidthConstraint;
    NSNumberFormatter *_countFormatter;
    UILabel *_domainLabel;
    UILabel *_domainDetailLabel;
    UILabel *_countLabel;
    double _count;
    double _maxCount;
}

- (void).cxx_destruct;
@property(nonatomic) double maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) double count; // @synthesize count=_count;
@property(readonly, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(readonly, nonatomic) UILabel *domainDetailLabel; // @synthesize domainDetailLabel=_domainDetailLabel;
@property(readonly, nonatomic) UILabel *domainLabel; // @synthesize domainLabel=_domainLabel;
- (void)_updateCountViews;
- (id)initWithDetailLabel:(_Bool)arg1 reuseIdentifier:(id)arg2;

@end

