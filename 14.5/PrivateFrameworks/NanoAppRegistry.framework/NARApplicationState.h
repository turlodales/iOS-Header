//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoAppRegistry/NSSecureCoding-Protocol.h>

@interface NARApplicationState : NSObject <NSSecureCoding>
{
    _Bool _restricted;
    _Bool _removedSystemApp;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic, getter=isRemovedSystemApp) _Bool removedSystemApp; // @synthesize removedSystemApp=_removedSystemApp;
@property(readonly, nonatomic, getter=isRestricted) _Bool restricted; // @synthesize restricted=_restricted;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithRestricted:(_Bool)arg1 removedSystemApp:(_Bool)arg2;

@end

