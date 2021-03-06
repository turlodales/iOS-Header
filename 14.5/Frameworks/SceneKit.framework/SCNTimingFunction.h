//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@interface SCNTimingFunction : NSObject <NSSecureCoding>
{
    struct __C3DTimingFunction *_timingFunction;
}

+ (_Bool)supportsSecureCoding;
+ (id)functionWithCAMediaTimingFunction:(id)arg1;
+ (id)functionWithTimingMode:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct __C3DTimingFunction *)c3dTimingFunction;
- (void)dealloc;
- (id)initWithTimingFunctionRef:(struct __C3DTimingFunction *)arg1;

@end

