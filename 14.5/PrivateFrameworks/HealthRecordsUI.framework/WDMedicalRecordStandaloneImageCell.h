//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordStandaloneImageCell : WDMedicalRecordGroupableCell
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_disclosureChevronView;
    UIImageView *_titleImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(retain, nonatomic) UIImageView *disclosureChevronView; // @synthesize disclosureChevronView=_disclosureChevronView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_updateForCurrentSizeCategory;
@property(copy, nonatomic) UIImage *titleImage;
@property(copy, nonatomic) NSString *detail;
@property(copy, nonatomic) NSString *title;
- (void)setupSubviews;

@end

