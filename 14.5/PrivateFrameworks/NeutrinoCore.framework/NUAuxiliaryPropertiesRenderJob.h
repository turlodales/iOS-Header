//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@protocol NUImageProperties;

@interface NUAuxiliaryPropertiesRenderJob : NURenderJob
{
    id <NUImageProperties> _imageProperties;
}

- (void).cxx_destruct;
- (id)result;
- (_Bool)prepare:(out id *)arg1;
- (_Bool)wantsCompleteStage;
- (_Bool)wantsRenderStage;

@end

