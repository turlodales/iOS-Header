//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCH3DNormalDirectionMapper;

@interface TSCH3DTexCoordGeneration : NSObject
{
    tmat4x4_3074befe _transform;
    TSCH3DNormalDirectionMapper *_normalDirectionMapper;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) TSCH3DNormalDirectionMapper *normalDirectionMapper; // @synthesize normalDirectionMapper=_normalDirectionMapper;
- (id)initWithTransform:(const tmat4x4_3074befe *)arg1;
- (id)init;

@end

