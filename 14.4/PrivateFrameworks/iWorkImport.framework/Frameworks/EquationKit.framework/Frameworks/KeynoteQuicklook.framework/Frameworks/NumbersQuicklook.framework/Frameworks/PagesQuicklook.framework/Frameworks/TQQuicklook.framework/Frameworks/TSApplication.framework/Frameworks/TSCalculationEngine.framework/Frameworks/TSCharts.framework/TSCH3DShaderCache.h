//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol TSCH3DProtectResourceDelegate;

@interface TSCH3DShaderCache : NSObject
{
    id <TSCH3DProtectResourceDelegate> mProtectResourceDelegate;
    NSMutableArray *mShaderCache;
}

@property(nonatomic) id <TSCH3DProtectResourceDelegate> protectResourceDelegate; // @synthesize protectResourceDelegate=mProtectResourceDelegate;
- (id)description;
- (void)flush;
- (id)shaderForShaderContext:(id)arg1 initializeProgramBlock:(CDUnknownBlockType)arg2;
- (void)p_ensureCacheLimit;
- (void)debug_verifyUniqueShadersInCache;
- (void)p_unprotectAllCacheItems;
- (void)dealloc;
- (id)init;

@end

