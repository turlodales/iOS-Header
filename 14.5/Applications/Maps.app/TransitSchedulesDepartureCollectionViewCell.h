//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TransitSchedulesDepartureBaseViewCell.h"

@class UILabel;
@protocol GEOTransitDeparture;

__attribute__((visibility("hidden")))
@interface TransitSchedulesDepartureCollectionViewCell : TransitSchedulesDepartureBaseViewCell
{
    id <GEOTransitDeparture> _departure;
    UILabel *_timeLabel;
    UILabel *_liveStatusLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *liveStatusLabel; // @synthesize liveStatusLabel=_liveStatusLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) id <GEOTransitDeparture> departure; // @synthesize departure=_departure;
- (id)statusStringTextColor;
- (id)timeTextColor;
- (void)updateShadow;
- (void)setSelected:(_Bool)arg1;
- (void)updateLiveStatusLabelFont;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateTimeLabelFont;
- (void)refreshCellStyling;
- (id)dateFormatter;
- (id)statusString;
- (id)statusStringAttributes;
- (void)updateStrings;
- (void)setReferenceDate:(id)arg1;
- (void)setDeparture:(id)arg1 withReferenceDate:(id)arg2 timeZone:(id)arg3 timeDisplayStyle:(unsigned long long)arg4;
- (CDUnknownBlockType)_selectedStatusLabelFontProvider;
- (CDUnknownBlockType)_selectedTimeLabelFontProvider;
- (void)configureViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

