//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFCore/NSSecureCoding-Protocol.h>

@interface AVAssetTrackSegment : NSObject <NSSecureCoding>
{
    CDStruct_82206317 _timeMapping;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) CDStruct_82206317 timeMapping; // @synthesize timeMapping=_timeMapping;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)description;
- (id)_initWithTimeMapping:(CDStruct_82206317)arg1;
- (id)init;

@end

