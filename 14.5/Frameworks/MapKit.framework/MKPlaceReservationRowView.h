//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

@class NSLayoutConstraint, NSMutableArray, NSString, UIButton, UISegmentedControl, _MKPlaceReservationInfo;

@interface MKPlaceReservationRowView : MKPlaceSectionRowView
{
    UISegmentedControl *_openTimesControl;
    UIButton *_buttonMakeReservation;
    UIButton *_buttonAttribution;
    NSMutableArray *_mutableConstraints;
    NSLayoutConstraint *_constraintButtonTopMargin;
    NSLayoutConstraint *_constraintButtonBottomMargin;
    _MKPlaceReservationInfo *_reservationInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _MKPlaceReservationInfo *reservationInfo; // @synthesize reservationInfo=_reservationInfo;
- (void)_contentSizeDidChange;
- (void)tintColorDidChange;
- (void)_updateTintColor;
- (void)_updateButtonTitleAttributes;
- (void)_updateMutableConstraints;
- (void)_setupImmutableConstraints;
- (void)_updateWithReservationInfo;
- (id)_attributedStringFromButtonTitle:(id)arg1 useSmallFont:(_Bool)arg2;
- (double)_buttonBottomMargin;
- (double)_buttonTopMargin;
- (id)_buttonFontSmall;
- (id)_buttonFontLarge;
- (void)_actionMakeReservation;
- (id)_newButtonForAttribution:(_Bool)arg1;
@property(retain, nonatomic) NSString *selectedTimeString;
@property(nonatomic) unsigned long long selectedTimeIndex;
- (id)initWithReservationInfo:(id)arg1;

@end

