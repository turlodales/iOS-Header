//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UICGImageDecompressor : NSObject
{
    struct CGImage *_imageRef;
    long long _orientation;
}

+ (void)flushCaches;
- (struct CGImage *)waitForImageRef;
- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize)arg2 renderingIntent:(unsigned long long)arg3 cache:(_Bool)arg4;

@end

