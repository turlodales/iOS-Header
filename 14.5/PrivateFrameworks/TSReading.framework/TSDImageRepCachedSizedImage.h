//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSDImageRepCachedSizedImage : NSObject
{
    struct CGImage *mImageRef;
    struct CGPath *mImageMaskPath;
    _Bool mImageHasMaskBakedIn;
    _Bool mImageHasAdjustmentsBakedImage;
    long long mImageOrientation;
    struct CGSize mImageSize;
}

@property(nonatomic) _Bool imageHasAdjustmentsBakedImage; // @synthesize imageHasAdjustmentsBakedImage=mImageHasAdjustmentsBakedImage;
@property(nonatomic) _Bool imageHasMaskBakedIn; // @synthesize imageHasMaskBakedIn=mImageHasMaskBakedIn;
@property(nonatomic) long long imageOrientation; // @synthesize imageOrientation=mImageOrientation;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=mImageSize;
@property(nonatomic) struct CGPath *imageMaskPath;
@property(nonatomic) struct CGImage *imageRef;
- (void)dealloc;

@end

