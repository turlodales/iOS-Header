//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/IPAImageTransform-Protocol.h>

@class NSArray;

@interface IPAImageTransformSequence : NSObject <IPAImageTransform>
{
    NSArray *_transforms;
}

- (void).cxx_destruct;
- (id)description;
- (id)inverseTransform;
- (struct CGPoint)mapPoint:(struct CGPoint)arg1;
- (id)intrinsicGeometry;
- (id)inputGeometry;
- (_Bool)canAlignToPixelsExactly;
- (id)initWithTransforms:(id)arg1;

@end

