//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXMemoriesFeedLayoutMetrics.h>

@interface PXMemoriesFeedWidgetLayoutMetrics : PXMemoriesFeedLayoutMetrics
{
    unsigned long long _numberOfColumns;
    unsigned long long _numberOfRows;
    long long _layoutAxis;
    struct CGSize _interitemSpacing;
}

@property(nonatomic) long long layoutAxis; // @synthesize layoutAxis=_layoutAxis;
@property(nonatomic) struct CGSize interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

