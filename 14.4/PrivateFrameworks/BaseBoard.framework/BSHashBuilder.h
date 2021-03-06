//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BSHashBuilder : NSObject
{
    unsigned long long _hash;
}

+ (id)builder;
- (id)appendArray:(id)arg1;
- (id)appendRect:(struct CGRect)arg1;
- (id)appendSize:(struct CGSize)arg1;
- (id)appendPoint:(struct CGPoint)arg1;
- (unsigned long long)hash;
- (id)appendString:(id)arg1;
- (id)appendPointer:(void *)arg1;
- (id)appendObject:(id)arg1;
- (id)appendClass:(Class)arg1;
- (id)appendBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)appendCGRect:(struct CGRect)arg1;
- (id)appendCGSize:(struct CGSize)arg1;
- (id)appendCGPoint:(struct CGPoint)arg1;
- (id)appendCGFloat:(double)arg1;
- (id)appendDouble:(double)arg1;
- (id)appendFloat:(float)arg1;
- (id)appendSizeT:(unsigned long long)arg1;
- (id)appendUnsignedInteger:(unsigned long long)arg1;
- (id)appendInteger:(long long)arg1;
- (id)appendBool:(_Bool)arg1;
- (id)appendHashingBlocks:(CDUnknownBlockType)arg1;

@end

