//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/ISBehavior.h>

@protocol ISLivePhotoSettleBehaviorDelegate;

__attribute__((visibility("hidden")))
@interface ISLivePhotoSettleBehavior : ISBehavior
{
}

- (long long)behaviorType;
- (void)_didFinish;
- (void)settle:(_Bool)arg1;

// Remaining properties
@property(nonatomic) __weak id <ISLivePhotoSettleBehaviorDelegate> delegate; // @dynamic delegate;

@end

