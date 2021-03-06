//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameController/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface _GCGamepadEventKeyboardEventAdapterConfig : NSObject <NSSecureCoding>
{
    struct UsagePage_Usage_Pair _mappings[41];
}

+ (_Bool)supportsSecureCoding;
- (long long)gamepadElementForUsagePage:(long long)arg1 usage:(long long)arg2;
- (void)mapUsagePage:(long long)arg1 usage:(long long)arg2 toGamepadElement:(long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

