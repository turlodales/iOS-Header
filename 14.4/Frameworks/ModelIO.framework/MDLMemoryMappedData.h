//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MDLMemoryMappedData : NSObject
{
    struct __sFILE *_file;
    char *_mappedAddr;
    char *_fileStart;
    long long _mappedFileSize;
    long long _length;
}

- (id)dataNoCopy;
- (void)dealloc;
- (id)initWithURL:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;

@end

