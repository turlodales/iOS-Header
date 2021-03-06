//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVTimeFormatter, NSLayoutConstraint, NSObject, UILabel, UISlider;
@protocol PUCropVideoScrubberViewDelegate;

__attribute__((visibility("hidden")))
@interface PUCropVideoScrubberView : UIView
{
    CDStruct_1b6d18a9 _startingTime;
    CDStruct_1b6d18a9 _endingTime;
    CDStruct_1b6d18a9 _currentTime;
    AVTimeFormatter *_beforeTimeFormatter;
    AVTimeFormatter *_afterTimeFormatter;
    _Bool _beforeTimeLabelOffset;
    _Bool _afterTimeLabelOffset;
    NSLayoutConstraint *_beforeLabelVerticalConstraint;
    NSLayoutConstraint *_afterLabelVerticalConstraint;
    UISlider *_scrubberSlider;
    UILabel *_beforeTimeLabel;
    UILabel *_afterTimeLabel;
    NSObject<PUCropVideoScrubberViewDelegate> *_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<PUCropVideoScrubberViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *afterTimeLabel; // @synthesize afterTimeLabel=_afterTimeLabel;
@property(retain, nonatomic) UILabel *beforeTimeLabel; // @synthesize beforeTimeLabel=_beforeTimeLabel;
@property(retain, nonatomic) UISlider *scrubberSlider; // @synthesize scrubberSlider=_scrubberSlider;
- (void)offsetTimeLabelsIfNecessary;
- (void)layoutSubviews;
- (void)setCurrentTime:(CDStruct_1b6d18a9)arg1;
- (void)videoScrubberValueChanged:(id)arg1;
- (void)updateSliderPosition;
- (void)timesChanged:(CDStruct_1b6d18a9)arg1 endingTime:(CDStruct_1b6d18a9)arg2 currentTime:(CDStruct_1b6d18a9)arg3;
- (void)videoScrubberDoneChanging;
- (id)initWithStartingTime:(CDStruct_1b6d18a9)arg1 endingTime:(CDStruct_1b6d18a9)arg2 currentTime:(CDStruct_1b6d18a9)arg3;

@end

