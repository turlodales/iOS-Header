//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@interface NTKBreathingComplicationDataSource : NTKComplicationDataSource
{
}

+ (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (_Bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)complicationApplicationIdentifier;
- (id)lockedTemplate;
- (id)currentSwitcherTemplate;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;

@end

