//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSPData;

@interface TSKAnimatedGIFMovieExporter : NSObject
{
    TSPData *_data;
}

+ (_Bool)canInitWithDataType:(id)arg1;
- (void).cxx_destruct;
- (void)p_finishWithSuccess:(_Bool)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (struct opaqueCMSampleBuffer *)p_createCMSampleBufferFromImageInCGImageSource:(struct CGImageSource *)arg1 atIndex:(unsigned long long)arg2 withPresentationTime:(CDStruct_1b6d18a9)arg3 nextPresentationTime:(out CDStruct_1b6d18a9 *)arg4;
- (void)exportToMovieFileURL:(id)arg1 fileType:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithData:(id)arg1;

@end

