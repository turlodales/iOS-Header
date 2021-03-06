//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosImagingFoundation/IPAGeometryOperator.h>

@interface IPAStraightenOperator : IPAGeometryOperator
{
    double _zAngle;
}

+ (id)operatorWithIdentifier:(id)arg1 angleZ:(double)arg2;
+ (id)operatorWithAngleZ:(double)arg1;
- (id)description;
- (id)transformForGeometry:(id)arg1;

@end

