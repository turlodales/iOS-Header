//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKRemoteUIController.h>

@class GKPlayer, NSURL;

@interface GKReportProblemRemoteUIController : GKRemoteUIController
{
    GKPlayer *_problemPlayer;
    NSURL *_url;
}

+ (id)controllerForProblemPlayer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) GKPlayer *problemPlayer; // @synthesize problemPlayer=_problemPlayer;
- (id)postBodyForInitialLoad;
- (id)bagKey;
- (id)fallbackURL;
- (int)preferredLayoutStyle;
- (id)initWithProblemPlayer:(id)arg1;

@end

