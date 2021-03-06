//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTAvatarPose, NSDictionary;

@interface AVTAvatarPhysicalizedPose : NSObject
{
    AVTAvatarPose *_pose;
    NSDictionary *_physicsStates;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *physicsStates; // @synthesize physicsStates=_physicsStates;
@property(readonly, nonatomic) AVTAvatarPose *pose; // @synthesize pose=_pose;
- (void)applyToAvatar:(id)arg1;
- (id)initWithPoseRepresentation:(id)arg1 physicsStatesRepresentation:(id)arg2;
- (id)initWithPose:(id)arg1 physicsStates:(id)arg2;
- (id)initWithSceneAtURL:(id)arg1;

@end

