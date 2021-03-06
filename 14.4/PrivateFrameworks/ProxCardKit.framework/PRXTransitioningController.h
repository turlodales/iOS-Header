//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProxCardKit/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString;
@protocol PRXPullDismissalProvider;

__attribute__((visibility("hidden")))
@interface PRXTransitioningController : NSObject <UIViewControllerTransitioningDelegate>
{
    id <PRXPullDismissalProvider> _pullDismissalProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <PRXPullDismissalProvider> pullDismissalProvider; // @synthesize pullDismissalProvider=_pullDismissalProvider;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)initWithPullDismissalProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

