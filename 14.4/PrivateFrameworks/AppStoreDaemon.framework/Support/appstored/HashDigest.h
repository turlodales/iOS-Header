//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HashDigest : NSObject
{
    void *_context;
    long long _digestType;
}

+ (id)_stringRepresentationForDigest:(char *)arg1 length:(unsigned int)arg2;
- (void)updateWithData:(id)arg1;
- (void)updateWithBuffer:(const char *)arg1 length:(unsigned long long)arg2;
- (id)finalAndCompute;
- (void)dealloc;
- (id)initWithDigestType:(long long)arg1;

@end

