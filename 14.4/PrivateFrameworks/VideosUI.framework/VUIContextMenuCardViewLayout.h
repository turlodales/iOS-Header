//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIContextMenuCardViewLayout : TVViewLayout
{
    VUITextLayout *_titleTextViewLayout;
    VUITextLayout *_subTitleTextViewLayout;
    TVImageLayout *_coverImageViewLayout;
    TVImageLayout *_badgeImageViewLayout;
}

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) TVImageLayout *badgeImageViewLayout; // @synthesize badgeImageViewLayout=_badgeImageViewLayout;
@property(retain, nonatomic) TVImageLayout *coverImageViewLayout; // @synthesize coverImageViewLayout=_coverImageViewLayout;
@property(retain, nonatomic) VUITextLayout *subTitleTextViewLayout; // @synthesize subTitleTextViewLayout=_subTitleTextViewLayout;
@property(retain, nonatomic) VUITextLayout *titleTextViewLayout; // @synthesize titleTextViewLayout=_titleTextViewLayout;
- (id)init;

@end

