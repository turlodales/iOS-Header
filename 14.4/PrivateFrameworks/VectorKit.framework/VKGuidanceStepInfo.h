//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKGuidanceStepInfo : NSObject
{
    NSString *_roadName;
    int _routePoint;
}

@property(readonly, nonatomic) int routePoint; // @synthesize routePoint=_routePoint;
@property(readonly, retain, nonatomic) NSString *roadName; // @synthesize roadName=_roadName;
- (void)dealloc;
- (id)initWithRoadName:(id)arg1 point:(int)arg2;

@end

