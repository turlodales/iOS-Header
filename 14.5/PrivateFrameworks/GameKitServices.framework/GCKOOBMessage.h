//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameKitServices/NSSecureCoding-Protocol.h>

@class NSData;

@interface GCKOOBMessage : NSObject <NSSecureCoding>
{
    unsigned int type;
    unsigned int band;
    NSData *data;
}

+ (_Bool)supportsSecureCoding;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)data;
- (unsigned int)band;
- (unsigned int)type;
- (id)init;

@end

