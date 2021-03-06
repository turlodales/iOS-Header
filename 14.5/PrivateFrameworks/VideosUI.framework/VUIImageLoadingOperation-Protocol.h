//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSError, TVImage;

@protocol VUIImageLoadingOperation <NSObject>
@property(readonly, copy, nonatomic) NSError *error;
@property(readonly, nonatomic) unsigned long long scalingResult;
@property(readonly, nonatomic) TVImage *image;
@property(readonly, nonatomic) _Bool cropToFit;
@property(readonly, nonatomic) struct CGSize scaleToSize;
@end

