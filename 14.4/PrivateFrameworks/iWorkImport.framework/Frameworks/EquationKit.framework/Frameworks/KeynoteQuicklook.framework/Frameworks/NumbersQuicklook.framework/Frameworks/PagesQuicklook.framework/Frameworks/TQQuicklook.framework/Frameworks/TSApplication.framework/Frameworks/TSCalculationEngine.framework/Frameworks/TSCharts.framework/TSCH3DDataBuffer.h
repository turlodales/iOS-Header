//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSCH3DDataBuffer : NSObject
{
}

- (struct DataBufferLevelData)dataWithSizeGreaterOrEqualTo:(unsigned long long)arg1;
- (struct DataBufferLevelData)dataAtLevel:(unsigned long long)arg1;
- (struct DataBufferInfo)bufferInfo;
@property(readonly, nonatomic) _Bool hasLevels;
@property(readonly, nonatomic) tvec2_3b141483 size2;
@property(readonly, nonatomic) tvec3_c2818ced size;
@property(readonly, nonatomic) unsigned long long byteSize;
@property(readonly, nonatomic) unsigned long long elementByteSize;
@property(readonly, nonatomic) unsigned long long componentByteSize;
- (id)description;

@end

