//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PIReframeKeyframe : NSObject
{
    CDStruct_1b6d18a9 _time;
    CDStruct_8e0628e6 _homography;
}

+ (id)keyframesFromDictionaryRepresentations:(id)arg1;
@property(readonly, nonatomic) CDStruct_8e0628e6 homography; // @synthesize homography=_homography;
@property(readonly, nonatomic) CDStruct_1b6d18a9 time; // @synthesize time=_time;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)description;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithTime:(CDStruct_1b6d18a9)arg1 homography:(CDStruct_8e0628e6)arg2;

@end

