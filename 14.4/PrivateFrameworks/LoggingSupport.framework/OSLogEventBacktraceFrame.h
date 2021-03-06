//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface OSLogEventBacktraceFrame : NSObject
{
    unsigned char _uuid[16];
    NSUUID *_imageUUID;
    unsigned long long _imageOffset;
}

@property(readonly, nonatomic) unsigned long long imageOffset; // @synthesize imageOffset=_imageOffset;
- (void)dealloc;
@property(readonly, nonatomic) const char *imageUUIDBytes;
@property(readonly, nonatomic) NSUUID *imageUUID;
- (id)initWithUUIDBytes:(const char *)arg1 andOffset:(unsigned long long)arg2;

@end

