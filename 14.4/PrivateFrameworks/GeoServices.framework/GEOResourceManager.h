//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOResourceManifestConfiguration;

@interface GEOResourceManager : NSObject
{
    GEOResourceManifestConfiguration *_configuration;
}

+ (id)sharedManagerForConfiguration:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
- (id)allResourceNames;
- (void)dataForSignedResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(CDUnknownBlockType)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(CDUnknownBlockType)arg3;
- (_Bool)isDevResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(CDUnknownBlockType)arg3;
- (id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(CDUnknownBlockType)arg3;
- (id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2;
- (id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2;
- (id)initWithConfiguration:(id)arg1;

@end

