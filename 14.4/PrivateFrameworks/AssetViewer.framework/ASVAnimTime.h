//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASVAnimTime : NSObject
{
    double _absoluteTime;
    double _startTime;
    double _oscillatingTime;
    double _delta;
    double _deltaPercentage;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)init;
@property(readonly, nonatomic) double deltaPercentage;
@property(readonly, nonatomic) double delta;
@property(readonly, nonatomic) double oscillatingTime;
@property(nonatomic) double startTime;
@property(nonatomic) double absoluteTime;

@end

