//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/FBSceneManagerObserver-Protocol.h>

@class FBSSceneClientSettings, FBSSceneClientSettingsDiff, FBSSceneTransitionContext, FBScene, FBSceneClientHandshake, FBSceneManager, NSSet;

@protocol FBSceneManagerDelegate <FBSceneManagerObserver>

@optional
- (void)sceneManager:(FBSceneManager *)arg1 scene:(FBScene *)arg2 didReceiveActions:(NSSet *)arg3;
- (void)sceneManager:(FBSceneManager *)arg1 scene:(FBScene *)arg2 didUpdateClientSettingsWithDiff:(FBSSceneClientSettingsDiff *)arg3 oldClientSettings:(FBSSceneClientSettings *)arg4 transitionContext:(FBSSceneTransitionContext *)arg5;
- (void)sceneManager:(FBSceneManager *)arg1 clientDidConnectWithHandshake:(FBSceneClientHandshake *)arg2;
- (FBSSceneTransitionContext *)sceneManager:(FBSceneManager *)arg1 createDefaultTransitionContextForScene:(FBScene *)arg2;
@end

