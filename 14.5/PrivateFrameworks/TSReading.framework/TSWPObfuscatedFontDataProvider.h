//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSInputStream;

@interface TSWPObfuscatedFontDataProvider : NSObject
{
    NSInputStream *_stream;
    unsigned char _xorMask[20];
}

- (void)rewind;
- (long long)skipForwardBy:(long long)arg1;
- (unsigned long long)readBytes:(char *)arg1 count:(unsigned long long)arg2;
- (long long)p_currentOffset;
- (void)dealloc;
- (id)initWithPath:(id)arg1 groupUID:(id)arg2;

@end

