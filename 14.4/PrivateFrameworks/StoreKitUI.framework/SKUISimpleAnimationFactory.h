//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/_UIBasicAnimationFactory-Protocol.h>

@class CAMediaTimingFunction, NSString;

__attribute__((visibility("hidden")))
@interface SKUISimpleAnimationFactory : NSObject <_UIBasicAnimationFactory>
{
    CAMediaTimingFunction *_timingFunction;
}

+ (id)factoryWithTimingFunction:(id)arg1;
+ (id)easeQuadOutTimingFunction;
+ (id)easeQuadInOutTimingFunction;
+ (id)easeQuadInTimingFunction;
+ (id)backOutTimingFunction;
- (void).cxx_destruct;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

