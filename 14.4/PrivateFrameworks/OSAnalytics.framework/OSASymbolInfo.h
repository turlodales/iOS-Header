//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OSASymbolInfo : NSObject
{
    unsigned char _uuid[16];
    NSString *legacy_name;
    NSString *legacy_arch;
    _Bool _isAppleCode;
    unsigned long long _start;
    unsigned long long _size;
    NSString *_path;
}

- (void).cxx_destruct;
@property _Bool isAppleCode; // @synthesize isAppleCode=_isAppleCode;
@property(readonly) NSString *path; // @synthesize path=_path;
@property unsigned long long size; // @synthesize size=_size;
@property unsigned long long start; // @synthesize start=_start;
- (void)setPath:(id)arg1;
- (id)get_uuid;
- (id)initWithSharedCache:(unsigned char [16])arg1 atBaseAddress:(unsigned long long)arg2;
- (id)initWithAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 for:(unsigned char [16])arg3;

@end

