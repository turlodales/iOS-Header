//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUGeometryTransform.h>

@class NSArray;

@interface NUCompoundTransform : NUGeometryTransform
{
    NSArray *_transforms;
}

- (void).cxx_destruct;
- (id)description;
- (CDStruct_14d5dc5e)transformMatrix:(CDStruct_14d5dc5e)arg1;
- (CDStruct_1b6d18a9)transformTime:(CDStruct_1b6d18a9)arg1;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1;
- (id)inverseTransform;
- (id)initWithTransforms:(id)arg1;
- (id)initWithSrcTransforms:(id)arg1 dstTransforms:(id)arg2;

@end

