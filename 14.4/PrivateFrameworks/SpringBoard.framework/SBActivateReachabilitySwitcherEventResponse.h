//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifierEventResponse.h>

@interface SBActivateReachabilitySwitcherEventResponse : SBSwitcherModifierEventResponse
{
    struct SBReachabilityActivationContext _reachabilityActivationContext;
}

@property(readonly, nonatomic) struct SBReachabilityActivationContext reachabilityActivationContext; // @synthesize reachabilityActivationContext=_reachabilityActivationContext;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithReachabilityContext:(struct SBReachabilityActivationContext)arg1;
- (long long)type;

@end

