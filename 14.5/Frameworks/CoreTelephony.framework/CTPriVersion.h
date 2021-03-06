//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface CTPriVersion : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_majorVersion;
    NSNumber *_minorVersion;
    NSNumber *_releaseVersion;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *releaseVersion; // @synthesize releaseVersion=_releaseVersion;
@property(retain, nonatomic) NSNumber *minorVersion; // @synthesize minorVersion=_minorVersion;
@property(retain, nonatomic) NSNumber *majorVersion; // @synthesize majorVersion=_majorVersion;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

