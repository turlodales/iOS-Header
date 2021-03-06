//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDLayout, TSDWrapSegments, TSWPColumn;
@protocol TSWPLayoutTarget;

@interface TSWPInteriorCookie : NSObject
{
    TSWPColumn *_column;
    TSDLayout<TSWPLayoutTarget> *_layout;
    TSDWrapSegments *_interiorWrapSegmentsInWrapSpace;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSDWrapSegments *interiorWrapSegmentsInWrapSpace; // @synthesize interiorWrapSegmentsInWrapSpace=_interiorWrapSegmentsInWrapSpace;
@property(nonatomic) __weak TSDLayout<TSWPLayoutTarget> *layout; // @synthesize layout=_layout;
@property(nonatomic) __weak TSWPColumn *column; // @synthesize column=_column;

@end

