//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DDScannerObject : NSObject
{
    struct __DDScanner *_scanner;
    int _type;
    _Bool _hasBasicType;
    long long _jobIdentifier;
}

@property(nonatomic) long long jobIdentifier; // @synthesize jobIdentifier=_jobIdentifier;
- (void)cancel;
- (int)type;
- (id)scanString:(id)arg1 range:(CDStruct_912cb5d2)arg2 query:(struct __DDScanQuery *)arg3 configuration:(id)arg4;
- (_Bool)hasBasicType;
- (void)dealloc;
- (id)initWithType:(int)arg1 enableParsec:(_Bool)arg2;

@end

