//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMDataRegressionModel.h>

@interface AXMDataRegressionModelLogarithmic : AXMDataRegressionModel
{
}

- (id)modelFunctionStringForParameters:(double *)arg1 significantFigures:(int)arg2;
- (id)partialDerivatives;
- (void)getInitialParams:(double *)arg1;
- (int)modelParameterCount;
- (CDUnknownBlockType)modelFunction;
- (id)modelDescription;

@end

