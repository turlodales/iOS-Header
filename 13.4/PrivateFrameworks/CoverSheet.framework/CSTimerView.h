//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFLockScreenDateSubtitleView.h>

#import <CoverSheet/PTSettingsKeyObserver-Protocol.h>

@class NSDate, NSString;

@interface CSTimerView : SBFLockScreenDateSubtitleView <PTSettingsKeyObserver>
{
    NSDate *_endDate;
}

- (void).cxx_destruct;
- (id)_timerFont;
- (id)_newTimerDialForSettings:(id)arg1;
- (void)_updateLegibilityStrength;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)updateTimerLabel;
- (void)setEndDate:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

