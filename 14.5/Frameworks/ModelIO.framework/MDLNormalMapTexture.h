//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLTexture.h>

@interface MDLNormalMapTexture : MDLTexture
{
    float _smoothness;
    float _contrast;
    MDLTexture *_sourceTexture;
}

- (void).cxx_destruct;
- (id)initByGeneratingNormalMapWithTexture:(id)arg1 name:(id)arg2 smoothness:(float)arg3 contrast:(float)arg4;
- (id)generateDataAtLevel:(long long)arg1 selector:(SEL)arg2;

@end

