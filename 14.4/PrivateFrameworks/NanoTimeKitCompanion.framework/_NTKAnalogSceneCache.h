//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKDevice, SKTexture;

@interface _NTKAnalogSceneCache : NSObject
{
    SKTexture *_faceCircleSpriteTexture;
    CLKDevice *_device;
}

+ (void)_deallocInstance;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)faceCircleSpriteTextureForDevice:(id)arg1;
- (void)_asyncDeallocInstance;
- (void)dealloc;
- (id)init;

@end

