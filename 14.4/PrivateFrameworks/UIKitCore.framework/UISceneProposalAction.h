//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@class NSString;

@interface UISceneProposalAction : BSAction
{
}

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)UIActionType;
@property(readonly, copy, nonatomic) BSAction *action;
@property(readonly, copy, nonatomic) NSString *sceneIdentifier;
- (id)initWithSceneIdentifier:(id)arg1 action:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

