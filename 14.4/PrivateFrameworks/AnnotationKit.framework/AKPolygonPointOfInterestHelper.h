//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKEightPointRectangularPointOfInterestHelper.h>

@interface AKPolygonPointOfInterestHelper : AKEightPointRectangularPointOfInterestHelper
{
}

+ (struct CGPoint)_pointForPointsControlOfPolygonWithNumberOfPoints:(unsigned long long)arg1 inAnnotation:(id)arg2 onPageController:(id)arg3;
+ (double)_degreesForPointsControlGivenPolygonWithNumberOfPoints:(unsigned long long)arg1;
+ (double)_degreesBetweenPointsForPointsControl;
+ (unsigned long long)numberOfPolygonPointsForControlPoint:(struct CGPoint)arg1 inAnnotation:(id)arg2 onPageController:(id)arg3;
+ (double)pointsControlPointDistanceFactor;
+ (struct CGPoint)_concreteValidatePoint:(struct CGPoint)arg1 ofDraggableArea:(unsigned long long)arg2 forAnnotation:(id)arg3 onPageController:(id)arg4;
+ (unsigned long long)_concreteDraggableAreaForPointOfInterestWithIndex:(unsigned long long)arg1 ofAnnotation:(id)arg2 onPageController:(id)arg3;
+ (void)_concretePointsOfInterest:(id *)arg1 withVisualStyle:(id *)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4;
+ (unsigned long long)minPolygonPoints;
+ (unsigned long long)maxPolygonPoints;

@end

