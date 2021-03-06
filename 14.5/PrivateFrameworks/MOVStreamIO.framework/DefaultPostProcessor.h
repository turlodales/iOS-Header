//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MOVStreamIO/MOVStreamPostProcessor-Protocol.h>

@class MOVStreamFrameConverter, NSString;

@interface DefaultPostProcessor : NSObject <MOVStreamPostProcessor>
{
    MOVStreamFrameConverter *_converter;
    _Bool removePadding;
    unsigned int originalPixelFormat;
    unsigned long long exactBytesPerRow;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int originalPixelFormat; // @synthesize originalPixelFormat;
@property unsigned long long exactBytesPerRow; // @synthesize exactBytesPerRow;
@property _Bool removePadding; // @synthesize removePadding;
- (struct __CVBuffer *)pixelBufferWithExactByterPerRow:(unsigned long long)arg1 fromPixelBuffer:(struct __CVBuffer *)arg2 error:(id *)arg3;
- (struct __CVBuffer *)pixelBufferWithoutPaddingFromPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (_Bool)shouldRemovePaddingOfPixelBuffer:(struct __CVBuffer *)arg1 metadata:(id)arg2;
- (_Bool)shouldChangeBytesPerRowOfPixelBuffer:(struct __CVBuffer *)arg1;
- (unsigned long long)minimumBytesPerRowForPixelBuffer:(struct __CVBuffer *)arg1;
- (void)dealloc;
- (struct __CVBuffer *)processedPixelBufferFrom:(struct __CVBuffer *)arg1 metadata:(id)arg2 error:(id *)arg3;
@property(readonly) unsigned int processedPixelFormat;
- (id)initWithOriginalPixelFormat:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

