//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFSelectableAlertButton.h>

@class NSObject, NSString, WFContentItem;
@protocol OS_dispatch_group;

@interface WFContentAlertButton : WFSelectableAlertButton
{
    _Bool _hasContentSubtitle;
    _Bool _hideSubtitle;
    NSString *_subtitle;
    WFContentItem *_contentItem;
    NSObject<OS_dispatch_group> *_group;
}

+ (void)processContentAlertButtonSubtitles:(id)arg1;
+ (id)buttonWithContentItem:(id)arg1 selected:(_Bool)arg2 stickySelection:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(nonatomic) _Bool hideSubtitle; // @synthesize hideSubtitle=_hideSubtitle;
@property(readonly, nonatomic) WFContentItem *contentItem; // @synthesize contentItem=_contentItem;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
- (_Bool)addSubtitleCompletionHandler:(CDUnknownBlockType)arg1;
- (void)start;
- (void)getSubtitle:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool hasContentSubtitle; // @synthesize hasContentSubtitle=_hasContentSubtitle;

@end

