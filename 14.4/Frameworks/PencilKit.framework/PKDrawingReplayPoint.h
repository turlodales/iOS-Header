//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKDrawingReplayPoint : NSObject
{
    unsigned long long _type;
    double _delay;
    struct CGPoint _point;
}

@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (CDStruct_6422aa5d)pkInputPointWithOffset:(struct CGPoint)arg1;

@end

