//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CIImage, PFLivePhotoEditSession;

@interface PHLivePhotoEditingContext : NSObject
{
    PFLivePhotoEditSession *_editSession;
}

+ (id)errorWithUnderlyingError:(id)arg1;
- (void).cxx_destruct;
- (void)cancel;
- (void)saveLivePhotoToOutput:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)prepareLivePhotoForPlaybackWithTargetSize:(struct CGSize)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly) unsigned int orientation;
@property float audioVolume;
@property(copy) CDUnknownBlockType frameProcessor;
@property(readonly) CDStruct_1b6d18a9 photoTime;
@property(readonly) CDStruct_1b6d18a9 duration;
@property(readonly) CIImage *fullSizeImage;
- (id)initWithLivePhotoEditingInput:(id)arg1;
- (id)init;

@end

