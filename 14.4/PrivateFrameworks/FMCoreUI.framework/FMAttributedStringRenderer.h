//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FMAttributedStringRendererOptions;

@interface FMAttributedStringRenderer : NSObject
{
    FMAttributedStringRendererOptions *_options;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FMAttributedStringRendererOptions *options; // @synthesize options=_options;
- (id)_imageFromTextStorage:(id)arg1 width:(double)arg2 showExclusionPaths:(_Bool)arg3;
- (struct CGSize)_sizeFromTextStorage:(id)arg1;
- (id)_textStorageForAttributedString:(id)arg1 width:(double)arg2 options:(id)arg3;
- (id)imageForAttributedString:(id)arg1 width:(double)arg2 showExclusionPaths:(_Bool)arg3 options:(id)arg4;
- (id)imageForAttributedString:(id)arg1 width:(double)arg2 options:(id)arg3;
- (id)imageForAttributedString:(id)arg1 width:(double)arg2;
- (id)initWithOptions:(id)arg1;
- (id)init;

@end

