//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKActionPan.h>

#import <OpusKit/NSSecureCoding-Protocol.h>
#import <OpusKit/OKActionEdgePanExports-Protocol.h>

@interface OKActionEdgePan : OKActionPan <OKActionEdgePanExports, NSSecureCoding>
{
}

+ (void)setupJavascriptContext:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)edgePanActionWithState:(unsigned long long)arg1 location:(struct CGPoint)arg2 touchCount:(unsigned long long)arg3 translation:(struct CGPoint)arg4 previousTranslation:(struct CGPoint)arg5 velocity:(struct CGPoint)arg6 previousVelocity:(struct CGPoint)arg7 direction:(unsigned long long)arg8 context:(id)arg9;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

