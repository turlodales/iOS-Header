//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppSupportUI/NUIArrangementContainer-Protocol.h>

@protocol _NUIGridArrangementContainer <NUIArrangementContainer>
- (void)populateGridArrangementDimension:(vector_b8a5df6e *)arg1 withCells:(const vector_f8404f95 *)arg2 axis:(long long)arg3;
- (void)populateGridArrangementCells:(vector_f8404f95 *)arg1;

@optional
- (_Bool)shouldCancelMeasurementForCompressionInAxis:(long long)arg1;
- (_Bool)canCancelMeasurementForCompression;
@end

