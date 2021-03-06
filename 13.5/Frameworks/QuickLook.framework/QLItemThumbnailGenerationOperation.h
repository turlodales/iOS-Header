//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLookThumbnailing/QLAsynchronousOperation.h>

@class QLItem, UIImage;
@protocol QLItemThumbnailGeneratorProtocol;

@interface QLItemThumbnailGenerationOperation : QLAsynchronousOperation
{
    UIImage *_thumbnail;
    id <QLItemThumbnailGeneratorProtocol> _generator;
    QLItem *_item;
    double _scale;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) QLItem *item; // @synthesize item=_item;
@property(retain, nonatomic) id <QLItemThumbnailGeneratorProtocol> generator; // @synthesize generator=_generator;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
- (void)main;
- (id)initWithThumbnailGenerator:(id)arg1 item:(id)arg2 size:(struct CGSize)arg3 scale:(double)arg4;

@end

