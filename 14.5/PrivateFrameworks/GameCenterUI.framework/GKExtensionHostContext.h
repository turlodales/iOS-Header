//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <GameCenterUI/GKExtensionHostProtocol-Protocol.h>

@class GKExtensionRemoteViewController, GKGame, NSString;

@interface GKExtensionHostContext : NSExtensionContext <GKExtensionHostProtocol>
{
    GKGame *_game;
    GKExtensionRemoteViewController *_remoteViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GKExtensionRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (void)messageFromExtension:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

