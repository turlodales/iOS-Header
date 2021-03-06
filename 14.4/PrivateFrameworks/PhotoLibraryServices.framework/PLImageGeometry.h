//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>

@interface PLImageGeometry : NSObject <NSCopying>
{
    long long _inputOrientation;
    long long _userOrientation;
    struct CGRect _inputRect;
}

+ (id)geometryWithOutputSize:(struct CGSize)arg1 appliedOrientation:(long long)arg2;
+ (id)geometryWithInputSize:(struct CGSize)arg1 initialOrientation:(long long)arg2;
@property(nonatomic) long long userOrientation; // @synthesize userOrientation=_userOrientation;
@property(readonly, nonatomic) long long inputOrientation; // @synthesize inputOrientation=_inputOrientation;
@property(readonly, nonatomic) struct CGRect inputRect; // @synthesize inputRect=_inputRect;
- (id)description;
- (struct CGAffineTransform)_transformFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (struct CGAffineTransform)transformFromOrientation:(long long)arg1;
- (struct CGAffineTransform)transformToOrientation:(long long)arg1;
- (struct CGRect)_basisRect:(long long)arg1;
- (struct CGRect)normalizeRect:(struct CGRect)arg1 basis:(long long)arg2;
- (struct CGRect)denormalizeRect:(struct CGRect)arg1 basis:(long long)arg2;
- (struct CGRect)outputRectForInputRect:(struct CGRect)arg1;
- (struct CGRect)inputRectForOutputRect:(struct CGRect)arg1;
- (void)applyOrientation:(long long)arg1;
- (void)rotateCounterClockwise;
- (void)rotateClockwise;
- (void)flipHorizontally;
- (void)flipVertically;
@property(readonly, nonatomic, getter=isMirrored) _Bool mirrored;
@property(readonly, nonatomic, getter=isSizeInverted) _Bool sizeInverted;
@property(readonly, nonatomic) struct CGAffineTransform appliedTransform;
@property(readonly, nonatomic) struct CGRect outputRect;
@property(nonatomic) long long appliedOrientation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInputSize:(struct CGSize)arg1 inputOrientation:(long long)arg2;
- (id)init;

@end

