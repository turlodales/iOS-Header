//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ODRPreallocatedFile : NSObject
{
    struct fstore _fStore;
    int _fileDescriptor;
    NSString *_path;
}

- (void).cxx_destruct;
@property(readonly) int fileDescriptor; // @synthesize fileDescriptor=_fileDescriptor;
@property(readonly) NSString *path; // @synthesize path=_path;
@property(readonly) long long size;
- (void)dealloc;
- (id)initForSpaceReduction:(long long)arg1;
- (id)initWithPath:(id)arg1 flags:(int)arg2 size:(long long)arg3;

@end

