//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSCHStyleOwnerUUIDDecoder : NSObject
{
    unsigned char mUUID[16];
    unsigned long long mIndex;
}

+ (id)UUIDDecoderWithUUID:(id)arg1;
- (void)endDecode;
- (unsigned long long)decodeNSUIntegerFromUInt64;
- (unsigned long long)decodeUInt64;
- (unsigned char)decodeByte;
- (_Bool)p_hasSpaceToDecodeNumberOfBytes:(unsigned long long)arg1;
- (id)initWithUUID:(id)arg1;

@end

