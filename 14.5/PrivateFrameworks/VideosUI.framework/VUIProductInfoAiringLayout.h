//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIProductInfoAiringLayout : TVViewLayout
{
    VUITextLayout *_infoTextLayout;
    TVImageLayout *_logoImageLayout;
}

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) TVImageLayout *logoImageLayout; // @synthesize logoImageLayout=_logoImageLayout;
@property(readonly, nonatomic) VUITextLayout *infoTextLayout; // @synthesize infoTextLayout=_infoTextLayout;
- (id)init;

@end

