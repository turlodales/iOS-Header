//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIInputViewSet;

__attribute__((visibility("hidden")))
@interface UIInputViewTransition : NSObject
{
    UIInputViewSet *oldSet;
    UIInputViewSet *newSet;
}

- (void)postNotificationsForTransitionEnd;
- (void)postNotificationsForTransitionStart;
- (id)newSet;
@property(readonly, nonatomic) UIInputViewSet *oldSet;

@end

