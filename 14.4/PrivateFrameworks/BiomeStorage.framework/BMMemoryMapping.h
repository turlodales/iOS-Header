//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BMMemoryMapping : NSObject
{
    int _protection;
    int _advice;
    void *_start;
    void *_end;
    unsigned long long _currentOffset;
    unsigned long long _size;
    long long _offset;
    void *_mappedAddress;
    unsigned long long _pageAlignedSize;
    unsigned long long _offsetSpace;
}

- (_Bool)canAtomicallyAccessOffset:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

