//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPHuman : NSObject
{
    float _confidence;
    unsigned long long _flags;
    struct CGRect _bounds;
}

+ (unsigned long long)flagsFromKeypoints:(id)arg1 withMinConfidence:(float)arg2;
@property float confidence; // @synthesize confidence=_confidence;
@property struct CGRect bounds; // @synthesize bounds=_bounds;
@property unsigned long long flags; // @synthesize flags=_flags;
- (id)init;

@end

