//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NSCopying-Protocol.h>
#import <NanoRegistry/NSSecureCoding-Protocol.h>

@class NSData;

@interface NRMiniUUIDSet : NSObject <NSCopying, NSSecureCoding>
{
    struct vector<unsigned int, std::__1::allocator<unsigned int>> _miniUUIDs;
    NSData *_data;
}

+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id)description;
- (_Bool)hasUUID:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUIDSet:(id)arg1;

@end

