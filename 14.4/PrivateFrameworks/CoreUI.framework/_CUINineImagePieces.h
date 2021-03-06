//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUIImage;

__attribute__((visibility("hidden")))
@interface _CUINineImagePieces : NSObject
{
    CUIImage *_center;
    CUIImage *_topLeft;
    CUIImage *_top;
    CUIImage *_topRight;
    CUIImage *_right;
    CUIImage *_bottomRight;
    CUIImage *_bottom;
    CUIImage *_bottomLeft;
    CUIImage *_left;
    _Bool _tileCenterAndEdges;
}

- (_Bool)tileCenterAndEdges;
- (id)left;
- (id)bottomLeft;
- (id)bottom;
- (id)bottomRight;
- (id)right;
- (id)topRight;
- (id)top;
- (id)topLeft;
- (id)center;
- (void)dealloc;
- (id)initWithCenter:(id)arg1 topLeft:(id)arg2 top:(id)arg3 topRight:(id)arg4 right:(id)arg5 bottomRight:(id)arg6 bottom:(id)arg7 bottomLeft:(id)arg8 left:(id)arg9 tileCenterAndEdges:(_Bool)arg10;

@end

