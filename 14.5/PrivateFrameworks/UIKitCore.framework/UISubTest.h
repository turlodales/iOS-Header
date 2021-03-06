//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface UISubTest : NSObject
{
    NSNumber *_startTime;
    NSNumber *_startFrame;
    NSMutableArray *_time;
    NSMutableArray *_fps;
    NSString *_testName;
    _Bool _showTime;
    _Bool _showFps;
    NSMutableDictionary *_data;
}

- (void).cxx_destruct;
@property(readonly) NSNumber *startTime; // @synthesize startTime=_startTime;
- (id)getObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)outputData;
- (void)stopWithFrameCount:(id)arg1;
- (void)startWithFrameCount:(id)arg1;
- (id)initWithName:(id)arg1 metrics:(id)arg2;

@end

