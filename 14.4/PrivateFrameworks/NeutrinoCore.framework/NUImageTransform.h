//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUGeometryTransform.h>

@interface NUImageTransform : NUGeometryTransform
{
}

- (id)transformByRotateX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (id)transformByRotateZ:(double)arg1;
- (id)transformByTranslateX:(double)arg1 translateY:(double)arg2;
- (id)transformByScaleX:(double)arg1 scaleY:(double)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (struct CGRect)transformRect:(struct CGRect)arg1;
- (_Bool)isIdentityImageTransform;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1;
- (id)inverseTransform;

@end

