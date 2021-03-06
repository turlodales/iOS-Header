//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNCommonProfileProgramGenerator : NSObject
{
    struct os_unfair_lock_s _programMutex;
    struct __CFDictionary *_shaders;
    struct __CFDictionary *_trackedResourcesToHashcode;
}

+ (id)deferredGeneratorWithProfile:(int)arg1;
+ (id)generatorWithProfile:(int)arg1;
- (void)releaseProgramForResource:(id)arg1;
- (struct __C3DFXProgram *)programWithHashCode:(struct __C3DProgramHashCode *)arg1 engineContext:(struct __C3DEngineContext *)arg2 trackedResource:(id)arg3 introspectionDataPtr:(void *)arg4;
- (void)emptyShaderCache;
@property(readonly, nonatomic) int profile;
- (void)dealloc;
- (id)init;

@end

