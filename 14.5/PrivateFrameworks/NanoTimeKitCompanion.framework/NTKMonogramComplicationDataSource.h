//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@class NSString, NTKMonogramTimelineEntryModel;

@interface NTKMonogramComplicationDataSource : NTKComplicationDataSource
{
    NTKMonogramTimelineEntryModel *_currentEntry;
    NSString *_monogramText;
    _Bool _listeningForMonogramNotifications;
}

+ (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (_Bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
- (void).cxx_destruct;
- (void)_reloadMonogramText;
- (void)_handleMonogramTextReload;
- (Class)richComplicationDisplayViewClassForDevice:(id)arg1;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (id)_currentTimelineEntry;
- (id)currentSwitcherTemplate;
- (void)dealloc;
- (void)stopListeningForMonogramNotifications;
- (void)startListeningForMonogramNotifications;
- (_Bool)supportsTapAction;
- (void)pause;
- (void)resume;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;

@end

