//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol ASVGestureDataSource;

@interface ASVGesture : NSObject
{
    _Bool _firstTouchWasOnAsset;
    id <ASVGestureDataSource> _dataSource;
    MISSING_TYPE *_initialAssetLocationOnScreen;
    MISSING_TYPE *_latestAssetLocationOnScreen;
}

- (void).cxx_destruct;
@property(nonatomic) MISSING_TYPE *latestAssetLocationOnScreen; // @synthesize latestAssetLocationOnScreen=_latestAssetLocationOnScreen;
@property(nonatomic) MISSING_TYPE *initialAssetLocationOnScreen; // @synthesize initialAssetLocationOnScreen=_initialAssetLocationOnScreen;
@property(nonatomic) _Bool firstTouchWasOnAsset; // @synthesize firstTouchWasOnAsset=_firstTouchWasOnAsset;
@property(nonatomic) __weak id <ASVGestureDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)finishGesture;
- (void)updateGesture;
- (id)initWithDataSource:(id)arg1;

@end

