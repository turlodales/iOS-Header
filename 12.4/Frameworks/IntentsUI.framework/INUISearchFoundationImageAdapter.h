//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFImage.h>

@class INImage, NSValue;

@interface INUISearchFoundationImageAdapter : SFImage
{
    NSValue *_sizeValue;
    INImage *_intentsImage;
}

+ (id)_sharedImageLoader;
+ (void)initialize;
@property(copy, nonatomic) INImage *intentsImage; // @synthesize intentsImage=_intentsImage;
- (void).cxx_destruct;
- (void)loadImageDataWithCompletionAndErrorHandler:(CDUnknownBlockType)arg1;
- (void)loadImageDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (struct CGSize)size;
- (void)setSize:(struct CGSize)arg1;
- (int)source;
- (id)payloadImage;
- (id)initWithIntentsImage:(id)arg1;
- (id)initWithPayloadImage:(id)arg1;

@end

