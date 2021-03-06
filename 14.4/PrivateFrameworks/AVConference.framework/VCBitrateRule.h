//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VCVideoRule;

__attribute__((visibility("hidden")))
@interface VCBitrateRule : NSObject
{
    unsigned int _bitrate;
    int _connectionType;
    VCVideoRule *limitingRule;
}

@property(readonly, nonatomic) VCVideoRule *limitingRule; // @synthesize limitingRule;
@property int connectionType; // @synthesize connectionType=_connectionType;
@property unsigned int bitrate; // @synthesize bitrate=_bitrate;
- (void)dealloc;
- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithBitrate:(unsigned int)arg1 connectionType:(int)arg2 limitingRule:(id)arg3;

@end

