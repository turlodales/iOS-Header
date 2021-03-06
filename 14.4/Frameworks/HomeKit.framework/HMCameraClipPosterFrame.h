//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@interface HMCameraClipPosterFrame : NSObject <NSCopying, NSSecureCoding>
{
    double _timeOffset;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _byteOffset;
    unsigned long long _sizeInBytes;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) unsigned long long sizeInBytes; // @synthesize sizeInBytes=_sizeInBytes;
@property(readonly) unsigned long long byteOffset; // @synthesize byteOffset=_byteOffset;
@property(readonly) unsigned long long height; // @synthesize height=_height;
@property(readonly) unsigned long long width; // @synthesize width=_width;
@property(readonly) double timeOffset; // @synthesize timeOffset=_timeOffset;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithTimeOffset:(double)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 byteOffset:(unsigned long long)arg4 sizeInBytes:(unsigned long long)arg5;

@end

