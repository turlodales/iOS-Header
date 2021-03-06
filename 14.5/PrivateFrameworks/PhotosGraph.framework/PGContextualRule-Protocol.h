//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class PGContextualOptions, PGHighlightItemList;
@protocol PGHighlightItemModelReader;

@protocol PGContextualRule <NSObject>
- (void)enumerateContextualKeyAssetsForYearHighlight:(PGHighlightItemList *)arg1 withOptions:(PGContextualOptions *)arg2 modelReader:(id <PGHighlightItemModelReader>)arg3 usingBlock:(void (^)(PHAsset *, double, id <PGHighlightItem>, id <PGHighlightItem>, _Bool *))arg4;
- (_Bool)canProvideContextualKeyAssetsWithOptions:(PGContextualOptions *)arg1;
@end

