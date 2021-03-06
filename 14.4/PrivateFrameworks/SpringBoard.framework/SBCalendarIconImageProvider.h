//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBDateTimeOverrideObserver-Protocol.h>

@class NSString, SBFDateTimeController;
@protocol SBCalendarIconImageProviderDelegate;

@interface SBCalendarIconImageProvider : NSObject <SBDateTimeOverrideObserver>
{
    id <SBCalendarIconImageProviderDelegate> _delegate;
    SBFDateTimeController *_dateTimeController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SBFDateTimeController *dateTimeController; // @synthesize dateTimeController=_dateTimeController;
@property(nonatomic) __weak id <SBCalendarIconImageProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2;
- (id)unmaskedIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)iconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)preparedISIcon;
- (void)_stopListeningForSignificantTimeChanges;
- (void)_startListeningForSignificantTimeChanges;
- (void)localeChanged;
- (void)reloadIconImage;
- (void)dealloc;
- (id)initWithDateTimeController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

