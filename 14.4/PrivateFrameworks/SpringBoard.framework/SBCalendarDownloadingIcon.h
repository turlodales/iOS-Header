//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBDownloadingIcon.h>

#import <SpringBoard/SBCalendarIconImageProviderDelegate-Protocol.h>

@class SBCalendarIconImageProvider;

@interface SBCalendarDownloadingIcon : SBDownloadingIcon <SBCalendarIconImageProviderDelegate>
{
    SBCalendarIconImageProvider *_imageProvider;
}

+ (_Bool)canGenerateIconsInBackground;
- (void).cxx_destruct;
@property(readonly, nonatomic) SBCalendarIconImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
- (void)calendarIconImageProviderHasChanged:(id)arg1;
- (id)unmaskedIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (void)localeChanged;
- (id)initWithDownloadingIconDataSource:(id)arg1;

@end

