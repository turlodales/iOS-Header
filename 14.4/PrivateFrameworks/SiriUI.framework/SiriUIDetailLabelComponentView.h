//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUILabelComponentView.h>

@class UILabel;

@interface SiriUIDetailLabelComponentView : SiriUILabelComponentView
{
    UILabel *_mainLabel;
    UILabel *_detailLabel;
}

+ (id)viewForComponent:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
- (void)addSubviewsForComponentModel:(id)arg1;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;

@end

