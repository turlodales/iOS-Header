//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/AVTTransition.h>

@protocol AVTAvatarTransitionModel;

@interface _AVTAvatarToLiveNoTransition : AVTTransition
{
    id <AVTAvatarTransitionModel> _avatarTransitionModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <AVTAvatarTransitionModel> avatarTransitionModel; // @synthesize avatarTransitionModel=_avatarTransitionModel;
- (void)_startTransition;
- (id)model;
- (id)initWithModel:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3 logger:(id)arg4;

@end

