//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIVibrancyEffectImpl : NSObject
{
}

+ (id)implementationFromCoder:(id)arg1;
- (void)appendDescriptionTo:(id)arg1;
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (id)implementationReplacingTintColor:(id)arg1;
- (id)implementationForUserInterfaceStyle:(long long)arg1;
- (_Bool)invertAutomaticStyle;
- (long long)vibrancyStyle;
- (long long)style;
- (void)setEffect:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;

@end

