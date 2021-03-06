//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KeynoteQuicklook/NSObject-Protocol.h>

@class KNSlideNode, NSObject, TSDMovieInfo;
@protocol TSKMediaPlayerController;

@protocol KNAnimationMovieHost <NSObject>
@property(readonly, nonatomic) NSObject<TSKMediaPlayerController> *playerController;
@property(readonly, nonatomic) KNSlideNode *movieSlideNode;
@property(readonly, nonatomic) TSDMovieInfo *movieInfo;
- (void)applyMovieControl:(long long)arg1;
@end

