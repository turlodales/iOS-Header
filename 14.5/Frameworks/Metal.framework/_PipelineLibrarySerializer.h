//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PipelineLibrarySerializer : NSObject
{
    void *_binarySerializer;
}

- (unsigned long long)writeToMemory:(char *)arg1 size:(unsigned long long)arg2;
- (unsigned long long)totalSize;
- (id)addComputePipelineDescriptor:(const void *)arg1;
- (id)addRenderPipelineDescriptor:(const void *)arg1;
- (id)addSpecializedFunction:(id)arg1 descriptor:(const void *)arg2;
- (unsigned long long)addLibrary:(void *)arg1;
- (void)dealloc;
- (id)init;

@end

